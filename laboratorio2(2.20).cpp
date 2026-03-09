//algoritmo que calcula el diametro, circunferencia y area de un circulo

#include <iostream>
using namespace std;

int main()
{
int radio = 0;
const double pi = 3.14159;

cout <<"Ingrese el Radio del Circulo: ";
cin >> radio;

cout << "Diametro: " << 2 * radio << endl;// Formula para obtener el diametro
cout << "Circunferencia: " << 2 * pi * radio << endl;// Formula para obtener la circunferencia
cout << "Area: " << pi * radio * radio << endl; // Formula para obtener la area del circulo

return 0;
}
