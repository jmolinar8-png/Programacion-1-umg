#include <iostream>
#include <cmath>
using namespace std;


double  calcularCargos(double horas){
    if (horas <= 3.0){
        return 2.0;
    } else {
    double pagoAdicional = ceil(horas -3.0);
    double cargo = 2.0 + (pagoAdicional *0.5);

    if(cargo > 10.0){
        return 10.0;
    }else {
    return cargo;
        }
    }
}

int main(){
    int n;
    cout <<"cuantos Autos? " ;
    cin >> n;
    double datos[100][3]; // 100 como numero maximo
    double totalHoras = 0, totalcargos = 0;

    for(int i = 0; i < n; i++){
        cout <<"Ingresa las horas del automovil " <<i +1<< ": ";
        cin >> datos[i][0];

        datos[i][1]= calcularCargos(datos[i][0]);
        totalHoras += datos[i][0];
        totalcargos += datos[i][1];
    }

    cout <<"\nAuto\tHoras\tCargo\n";
    for(int i=0; i < n;i++){
        cout << i+1 <<"\t"
             << datos[i][0]<<"\t"
             << datos[i][1]<< endl;
    }
    cout <<"Total \t" << totalHoras << "\t" << totalcargos << endl;
     return 0;
}
