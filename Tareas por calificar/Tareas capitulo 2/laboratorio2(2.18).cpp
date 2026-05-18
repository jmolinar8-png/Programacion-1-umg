//Algoritmo que permite la comparacion de dos numeros enteros para saber cual numero es mayor o si son iguales

#include <iostream>

using namespace std;

int main()
{
int numero1 = 0;
int numero2 = 0;

cout <<"Ingrese el primer valor: ";
cin >> numero1;
cout <<"Ingrese el segundo valor: ";
cin >> numero2;

if(numero1 > numero2)
    cout << numero1 <<" es mas grande" << endl;
if(numero1 < numero2)
    cout << numero2 <<" es mas grande" << endl;
if(numero1 == numero2)
    cout <<" Estos numeros son iguales" << endl;

    return 0;
}
