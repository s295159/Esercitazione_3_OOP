#include "ComplexNumber.hpp"
using namespace std;

namespace ComplexNumber{


string ComplexNumber::to_string() const
{
    string complesso = std::to_string(parte_reale);
    if(parte_immaginaria >= 0)
    {
        complesso += "+" + std::to_string(parte_immaginaria) + "i";
    }
    else
    {
        complesso += std::to_string(parte_immaginaria) + "i";
    }

    return complesso;
}

ostream& operator<<(ostream& os, const ComplexNumber& z)
{
    os << z.to_string(); // trasformo z nel numero complesso e lo salvo nella variabile che verrà stampata
    return os;
}

ComplexNumber operator+(const ComplexNumber &z1, const ComplexNumber &z2)
{
    return ComplexNumber(z1.parte_reale + z2.parte_reale , z1.parte_immaginaria + z2.parte_immaginaria);
}

bool operator==(const ComplexNumber& z1, const ComplexNumber& z2)
{
    return (z1.parte_reale == z2.parte_reale) && (z1.parte_immaginaria == z2.parte_immaginaria);
}

ComplexNumber coniugato(const ComplexNumber& z) {
    return ComplexNumber(z.parte_reale, -z.parte_immaginaria);
}

}
