#include "HABITACIONES.h"

HABITACIONES::HABITACIONES()
{
    //ctor
}

void HABITACIONES::menu()
{
     int opcion;
    char letra;

    do{
        system("cls");
        cout<<"\t\t\t-------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION HABITACIONES  |"<<endl;
	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Habitacioes Disponibles"<<endl;
	cout<<"\t\t\t 2. Despliegue Habitaciones"<<endl;
	cout<<"\t\t\t 3. Modificar Habitaciones"<<endl;
	cout<<"\t\t\t 4. Buscar Habitaciones"<<endl;
	cout<<"\t\t\t 5. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Agrega otra habitacion(Y,N): ";
    		cin>>letra;
		}while(letra=='y'||letra=='Y');
		break;
	case 2:
		leer();
		break;
	case 3:
		modificar();
		break;
	case 4:
		borrar();
		break;
	case 5:
		exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!= 6);
}


void HABITACIONES::insertar()
{
    	system("cls");
	fstream file;
	cout<<"\n-------------------------------------------------Agregar detalles Persona ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Numero de Habitacion        : ";
	cin>>numeroHabitacion;
	cout<<"\t\t\tIngresa Tipo de Habitacion     : ";
	cin>>tipoHabitacion;
	cout<<"\t\t\tIngresa Tipo de Cama : ";
	cin>>tipoCama;
	cout<<"\t\t\tIngresa el precio: ";
	cin>>precio;
	file.open("hotel.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< numeroHabitacion <<std::left<<std::setw(15)<< tipoCama <<std::left<<std::setw(15)<< precio << "\n";
	file.close();

}

void HABITACIONES::leer()
{

}

void HABITACIONES::modificar()
{


}

void HABITACIONES::buscar()
{

}

HABITACIONES::~HABITACIONES()
{
    //dtor
}
