#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    string s = ""; // This is the default value for type string
    ComplexNumber::ComplexNumber z;

    ComplexNumber::ComplexNumber z1(1,2);
    ComplexNumber::ComplexNumber z2(1,-2);

    cout << " z1 : " << z1 << endl;
    cout << " z2 : " << z2 << endl;

    // OPERAZIONE SOMMA
    ComplexNumber::ComplexNumber somma = z1 + z2 ;
    cout << " Somma z1 + z2 = " << somma << endl;

    // OPERATORE UGUAGLIANZA
    if (z1 == z2)
    {
        cout << " I due numeri complessi sono uguali " << endl;
    }
    else
    {
        cout << " I due numeri complessi non sono uguali " << endl;
    }

    // CONIUGATO
    ComplexNumber::ComplexNumber coniug = ComplexNumber::coniugato(z1); // richiamo la funzione e gli do in input z1
    cout << " Il coniugato di z1 e' : " << coniug << endl;




    return 0;
}
