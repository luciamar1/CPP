#include "Base.hpp"

Base::~Base() {}

Base * generate(void)
{
    int  random = std::rand() % 3;
    switch (random)
    {
        case 0:
            return(new A());
        case 1:
            return(new B());
        case 2:
            return(new C());
        default:
            return NULL;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "Type A" << std::endl;
    }

    if (dynamic_cast<B *>(p))
    {
        std::cout << "Type B" << std::endl;
    }

    if (dynamic_cast<C *>(p))
    {
        std::cout << "Type C" << std::endl;
    }
}

void identify(Base& p)
{
    try
    {
        (void)( dynamic_cast<A&>(p));
        std::cout << "Type A" << std::endl;
    }
    catch (std::bad_cast&){}

    try
    {
        (void)( dynamic_cast<B&>(p));
        std::cout << "Type B" << std::endl;
    }
    catch (std::bad_cast&){}

    try
    {
        (void)( dynamic_cast<C&>(p));
        std::cout << "Type C" << std::endl;
    }
    catch (std::bad_cast&){}
}