#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <stdint.h>
struct Data
{
    int number;
    std::string str;
};


class Serializer
{
private:
    Serializer();
    Serializer(Serializer &other);
    ~Serializer();
    Serializer& operator=(const Serializer&); 
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);


};

#endif