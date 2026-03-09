//Este algoritmo dara al usuario los resultados aritmeticos entre dos numeros enteros
#include<iostream>

int main()
{
 using std::cout;
 using std::cin;
 using std::endl;

 int numero1= 0;
 int numero2= 0;
 int suma = 0;
 int producto =0;
 int resta=0;
 int division=0;


 cout <<"Escriba dos numeros enteros: ";
 cin >> numero1 >> numero2;

 suma = numero1 + numero2;
 cout <<"Suma de los numeros: " <<suma << endl;

 producto = numero1 * numero2;
 cout <<"Producto de los numeros: " <<producto << endl;

 resta = numero1 - numero2;
 cout <<"Diferencia de los numeros: " << resta <<endl;

 division = numero1 / numero2;
 cout <<"Division de los numeros: " << division <<endl;
}
