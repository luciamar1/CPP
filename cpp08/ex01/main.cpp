#include "span.hpp"
#include <iostream>
#include <vector>
#include <list>

void printContainer(const std::vector<int>& container) {
    std::cout << "Contenido del contenedor: ";
    for (size_t i = 0; i < container.size(); ++i) {
        std::cout << container[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    try
    {
        std::cout << "\n\nCreando un Span con capacidad para 10 elementos...\n";
        Span sp(10);

        std::cout << "Creando un vector de números y agregándolos al Span usando addNumbers...\n";
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2200);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        sp.addNumbers(numbers.begin(), numbers.end());
        std::cout << "Números agregados desde el vector.\n";
        printContainer(sp.getContainer());

        std::cout << "Calculando el Shortest Span y el Longest Span...\n";
        std::cout << "         Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "         Longest Span: " << sp.longestSpan() << std::endl;

        std::cout << "Agregando más números desde una lista...\n";
        std::list<int> moreNumbers;
        moreNumbers.push_back(10);
        moreNumbers.push_back(15);
        moreNumbers.push_back(20);
        sp.addNumbers(moreNumbers.begin(), moreNumbers.end());
        std::cout << "Más números agregados desde la lista.\n";
        printContainer(sp.getContainer());

        std::cout << "Recalculando el Shortest Span y el Longest Span...\n";
        std::cout << "        Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "        Longest Span: " << sp.longestSpan() << std::endl;

        std::cout << "Intentando agregar un rango que exceda la capacidad...\n";
        std::vector<int> tooManyNumbers;
        tooManyNumbers.push_back(25);
        tooManyNumbers.push_back(30);
        tooManyNumbers.push_back(35);
        tooManyNumbers.push_back(40);
        sp.addNumbers(tooManyNumbers.begin(), tooManyNumbers.end());
    }
    catch (const std::exception& e)
    {
        std::cerr << "Excepción atrapada: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {

        std::cout << "\n\nCreando un Span con capacidad para 5 elementos y probando con un rango vacío...\n";
        Span sp3(5);

        std::vector<int> emptyRange;
        sp3.addNumbers(emptyRange.begin(), emptyRange.end());
        std::cout << "Rango vacío agregado correctamente.\n";
        printContainer(sp3.getContainer());

        std::cout << "Intentando calcular el Shortest Span y el Longest Span...\n";
        std::cout << "       Shortest Span: " << sp3.shortestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Excepción atrapada: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "\n\nCreando otro Span con capacidad para 5 elementos y probando nuevamente con un rango vacío...\n";
        Span sp2(5);

        std::vector<int> emptyRange;
        sp2.addNumbers(emptyRange.begin(), emptyRange.end());
        std::cout << "Rango vacío agregado correctamente.\n";
        printContainer(sp2.getContainer());

        std::cout << "Intentando calcular el Shortest Span en un Span vacío...\n";
        std::cout << "       Longest Span: " << sp2.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Excepción atrapada: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "\n\nCreando un Span con capacidad para 10,000 elementos y llenándolo con un rango de números grandes...\n";
        Span bigSpan(10000);
        std::vector<int> numbers;
        for (int i = 0; i < 10000; ++i)
        {
            numbers.push_back(i);
        }

        bigSpan.addNumbers(numbers.begin(), numbers.end());
        std::cout << "Números grandes agregados correctamente.\n";

        std::cout << "Calculando el Shortest Span y el Longest Span para el rango grande...\n";
        std::cout << "       Shortest Span: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "       Longest Span: " << bigSpan.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Excepción atrapada: " << e.what() << std::endl;
    }

    return 0;
}