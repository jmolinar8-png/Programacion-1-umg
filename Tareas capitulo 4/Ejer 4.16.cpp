#include <iostream>
using namespace std;

int main(){

    double horastrabajadas;
    double tarifa;

    cout <<"Introduzca las horas trabajadas (o -1 para salir): " << endl;
    cin >>horastrabajadas;

    while(horastrabajadas != -1){
        cout<<"Introduzca la tarifa por horas del empleado: " << endl;
        cin >> tarifa;
        if(horastrabajadas >= 40){
            cout<<"El salario es de: "<< horastrabajadas*tarifa*1.5<<endl;
        }else {
        cout <<"El salario es de: "<<horastrabajadas*tarifa<< endl;
        }
            cout <<"Introduzca las horas trabajadas (o -1 para salir): " << endl;
            cin >>horastrabajadas;
    }
}
