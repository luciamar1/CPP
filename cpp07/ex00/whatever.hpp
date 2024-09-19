#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void    swap(T &a, T &b)
{
    T aux; 
    aux = a;
    a = b;
    b = aux;
}

template <typename T>
T min( T const &a,  T const &b)
{
    if (a>=b)
        return b;
    return a;
}

template <typename T>
T max( T const &a,  T const &b)
{
    if (a<=b)
        return b;
    return a;
}

#endif