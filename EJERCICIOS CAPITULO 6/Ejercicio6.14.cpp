#include <iostream>
#include <cmath>
using namespace std;

double redondearAEntero(double x){
    double E = 0;
    E = floor(x);
    return E;
}

double redondearADecimales(double x){
    double D = 0;
    D = floor(x*10+0.5)/10;
    return D;
}
double redondearACentesimas(double x){
    double C = 0;
    C = floor(x*100+0.5)/100;
    return C;
}
double redondearAMilesimas(double x){
    double M = 0;
    M = floor(x * 1000+0.5)/1000;
    return M;
}

int main(){
    double E;
    cout << "Ingresa un numero con mas de 4 decimas: " << endl;
    cin >> E;
     double resultado1 = redondearAEntero(E);
     double resultado2 = redondearADecimales(E);
     double resultado3 = redondearACentesimas(E);
     double resultado4 = redondearAMilesimas(E);
     cout <<"Numero original: " << E << endl;
     cout <<"Numero redondeado a Entero: " << resultado1 << endl;
     cout <<"Numero redondeado a Decimales: " << resultado2 << endl;
     cout <<"Numero redondeado a Centesimas: " << resultado3 << endl;
     cout <<"Numero redondeado a Milesimas: " << resultado4 << endl;
     return 0;
}
