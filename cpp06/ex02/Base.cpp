#include "Base.hpp"

Base::Base(){}


Base::Base(Base &other)
{
    *this = other;
}

Base& Base::operator=(const Base& other) 
{
     if(this != &other)
    {
        ;*this = other;
    }
    return(*this);
 }


Base::~Base() {}



uintptr_t Base::serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Base::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}