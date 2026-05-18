#include <iostream>

 int main(){
 using std::cout;
 using std::cin;
 using std::endl;

 int x = 0;
 int y = 0;
 int z = 0;
 int resultado1 = 0;

 cout <<"Escriba el primer entero: ";// pide los daros de los usuarios
 cin >> x; //lee el primer entero del usuario y lo coloca en x

 cout <<"Escribe el segundo entero: ";
 cin >> y;

 cout <<"Escriba el tercer entero: ";
 cin >> z;

 resultado1 = x + y + z;

 cout <<"La suma es: " << resultado1 << endl;

 }
