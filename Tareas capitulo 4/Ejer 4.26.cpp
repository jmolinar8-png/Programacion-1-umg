#include <iostream>
 using namespace std;

 int main(){
    int numero =0;

    cout<<"Este programa te ayudara saber si x numero de 5 digitos es un palindromo o no"<< endl;
    cout <<"Ingrese un numero; " << endl;
    cin >> numero;

    int numero1 = numero / 10000;
    int numero2 = (numero/1000) %10;
    int numero4 = (numero/10) %10;
    int numero5 = numero %10;

    if(numero1 == numero5 && numero2 == numero4){
        cout << numero <<" es un palindromo"<< endl;

    } else {
        cout << numero <<"No es un palindromo"<<endl;
    }

    return 0;

 }
