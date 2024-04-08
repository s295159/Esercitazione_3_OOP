#ifndef __COMPLEXNUMBER_H // Header guards
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

using namespace std;


namespace ComplexNumber{

struct ComplexNumber
{

    double parte_reale;
    double parte_immaginaria;

    ComplexNumber(double a, double b):
        parte_reale(a),
        parte_immaginaria(b)
    {}

    ComplexNumber() = default; // Default constructor.
    string to_string() const;
};

ostream& operator<<(ostream& os, const ComplexNumber &z);

ComplexNumber operator+(const ComplexNumber &z1, const ComplexNumber &z2);

bool operator==(const ComplexNumber& z1, const ComplexNumber& z2);

ComplexNumber coniugato(const ComplexNumber &z);

ComplexNumber coniugato(const ComplexNumber& z);

}
#endif
