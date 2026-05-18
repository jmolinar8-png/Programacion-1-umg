#include <iostream>
using namespace std;

int main(){
    int numerocuenta;
    double saldoinicial, cargos, creditoscliente, creditopermitido, nuevosaldo;

    cout <<"Introduzca el numero de cuenta (o -1 para salir): " << endl;
    cin >> numerocuenta;

    while(numerocuenta != -1 ){

        cout <<"Introduzca el saldo inicial: "<< endl;
        cin >> saldoinicial;
        cout <<"Introduzca los cargos totales: " << endl;
        cin >>cargos;
        cout<<"Introduzca los creditos totales: " << endl;
        cin >> creditoscliente;
        cout <<"Introduzca el limite de credito: "<< endl;
        cin >> creditopermitido;

    nuevosaldo = saldoinicial+cargos-creditoscliente;
    cout << "El nuevo saldo es " << nuevosaldo << endl;

      if(nuevosaldo > creditopermitido){
        cout <<"Cuenta: " << numerocuenta << endl;
        cout <<"limite de credito: " << creditopermitido<<endl;
        cout <<"Saldo: " << saldoinicial + creditoscliente << endl;
        cout <<"Se excedio el limite de su credito" << endl;
     }
     cout <<"Introduzca el numero de cuenta (0 -1 para salir): ";
     cin >> numerocuenta;
     }
     return 0;
}
