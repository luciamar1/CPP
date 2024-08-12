#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void    iter(T &a, T &b, T &c)
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