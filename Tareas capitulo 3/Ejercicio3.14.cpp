#include<iostream>
using namespace std;

class Empleado{
private:
string primerNombre;
string apellidoPaterno;
int salarioMensual;

public:
    void setNombre(string nombre)
    {
        primerNombre = nombre;
    }
    string getNombre(){
    return primerNombre;
    }
    void setApellido(string apellido)
    {
       apellidoPaterno = apellido;
    }
    string getApellido(){
    return apellidoPaterno;
    }
    void setSalario(int salario)
    {
        salarioMensual = salario;
    }
    int getSalario(){
    return salarioMensual;
    }
};

int main()
{
 Empleado Empleado1;
 Empleado1.setNombre("Josue");
 Empleado1.setApellido("Molina");
 Empleado1.setSalario(3000);

 cout <<"Nombre del empleado: "<< Empleado1.getNombre() << " " << Empleado1.getApellido() << endl;
 cout <<"Su salario es de: "<< Empleado1.getSalario()<< endl;


 return 0;
}
