#include <iostream>
using namespace std;


int main(){
    unsigned int aprobados = 0;
    unsigned int reprobados = 0;
    unsigned int contadorEstudiantes =1;

    while(contadorEstudiantes<=10)
    {
        cout <<"Escriba el resultado (1 = aprobado, 2 = reprobado): " << endl;
        int resultado = 0;
        cin >> resultado;

        if(resultado==1){
            aprobados = aprobados + 1;}
        if(resultado == 2){
            reprobados = reprobados + 1;}
        if(resultado != 1 && resultado != 2){
            cout <<"debes ingresar 1 para sumar un alumno aprobado o 2 para sumar un almuno reprobado" << endl;
            }
        contadorEstudiantes = contadorEstudiantes+1;
    }
    cout <<"Aprobados" << aprobados <<"/nReprobados" << reprobados << endl;
    if(aprobados > 8)
        cout <<"Bono para el instructor" << endl;
    }
