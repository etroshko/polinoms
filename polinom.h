#ifndef POLINOM_H
#define POLINOM_H

#include <iostream>

class Polinom
{
private:
    int power; // степень полинома
    double *coefficient;     // массив коэффициентов

public:
    Polinom();
    Polinom (int a);
    ~Polinom();
    Polinom(const Polinom &org);
    Polinom operator*(Polinom &org);
    Polinom operator+(const Polinom &org);
    Polinom & operator=(const Polinom &org);
    Polinom derivative(Polinom temp);

    friend std::istream &operator >> (std::istream &in, const Polinom &org);
    friend std::ostream &operator << (std::ostream &out, const Polinom &org);

};

#endif // POLINOM_H_INCLUDED
