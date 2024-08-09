#include "Base.hpp"

int main() {
    Base* p = generate();
    identify(p);
    identify(*p);

     Base* l = generate();
    identify(l);
    identify(*l);

     Base* a = generate();
    identify(a);
    identify(*a);

     Base* b = generate();
    identify(b);
    identify(*b);


     Base*c = generate();
    identify(c);
    identify(*c);

     Base* d = generate();
    identify(d);
    identify(*d);

    delete c;
    delete d;
    delete a;
    delete b;
    delete p;
    delete l;
    return 0;
}
