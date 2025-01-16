#include <iostream>
#include "MutantStack.hpp"

// int main()
// {
//     MutantStack<int> mstack;

//     mstack.push(5);
//     mstack.push(17);
//     std::cout << "Top element: " << mstack.top() << std::endl;
    
//     mstack.pop();
//     std::cout << "Stack size after pop: " << mstack.size() << std::endl;

//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();

//     ++it;
//     --it;

//     std::cout << "Stack elements:" << std::endl;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }

//     std::stack<int> s(mstack); // Copiar el MutantStack en un std::stack

//     return 0;
// } 
#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"  // Asegúrate de tener el archivo de header de MutantStack

// Función para imprimir el contenido de un contenedor (stack o list)
template <typename Container>
void printContainer(Container& container) {
    typename Container::iterator it = container.begin();
    typename Container::iterator ite = container.end();
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
}

int main() {
    // Usar MutantStack
    std::cout << "Probando MutantStack:" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top del stack: " << mstack.top() << std::endl;  // Debería imprimir 17
    mstack.pop();
    std::cout << "Tamaño del stack después de pop: " << mstack.size() << std::endl;  // Debería ser 1
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Imprimir todos los elementos de mstack
    std::cout << "Contenido de MutantStack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;  // Avanzar al siguiente elemento
    --it;  // Retroceder al primer elemento
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    // Crear una copia del MutantStack como un std::stack
    std::stack<int> s(mstack);
    std::cout << "Contenido de std::stack (top): " << s.top() << std::endl;

    std::cout << std::endl;

    // Usar std::list
    std::cout << "Probando std::list:" << std::endl;
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << "Front de la lista: " << mlist.front() << std::endl;  // Debería imprimir 5
    mlist.pop_back();
    std::cout << "Tamaño de la lista después de pop: " << mlist.size() << std::endl;  // Debería ser 1
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);

    // Imprimir todos los elementos de mlist
    std::cout << "Contenido de std::list:" << std::endl;
    printContainer(mlist);

    return 0;
}
