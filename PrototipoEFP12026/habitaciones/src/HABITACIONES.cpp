#include "HABITACIONES.h"
#include <iostream>
#include <string>
#include <fstream>
#include<iomanip>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>

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
system("cls");
    ifstream file;
    int total= 0;
    cout <<"n\------------------- inventario de productos-------------------"<<endl;
    file.open("hotel.txt", ios::in);
    if(!file)
    {
        cout<<"\tNo hay ningun inventario...";
        file.close();
    }
    else{
        file >> numeroHabitacion >> tipoHabitacion >> tipoCama >> precio;
        while(!file.eof())
        {
            total++;
            cout <<"Numero de habitacion: "<<numeroHabitacion<<endl;
            cout <<"Tipo de habitacion: "<<tipoHabitacion<<endl;
            cout <<"Tipo de cama: " << tipoCama<<endl;
            cout <<"Precio de la habitacion: "<<precio<<endl;
            file >> numeroHabitacion >> tipoHabitacion >> tipoCama >> precio;
        }
        if(total==0){
            cout<<"\t\tNo hay informacion...";
        }
    }
    file.close();
}

void HABITACIONES::modificar()
{
system("cls");
    fstream file, file1;
    string id_producto;
    int found = 0;
    cout <<"---------------------------Modificacion de Habitaciones-------------------------------"<< endl;
    file.open("hotel.txt", ios::in);
    if(!file){
        cout<<"\tNo hay informacion..."<<endl;
    }
    else{
    cout<<"\nIngrese el Numero de Habitacion que desea modificar: ";
    cin >>id_producto;
    file1.open("temp.txt", ios::app |ios::out);
    file >> numeroHabitacion >> tipoHabitacion >> tipoCama >> precio;
    while(!file.eof())
    {
        if(id_producto!=numeroHabitacion){
         file1<<std::left<<std::setw(15)<< numeroHabitacion <<std::left<<std::setw(15)<< tipoHabitacion<<std::left<<std::setw(15) <<tipoCama <<std::left<<std::setw(15)<< precio << "\n";
        }
        else {
            cout<<"\t\t\tIngrese numero de habitacion: ";
				cin>>numeroHabitacion;
				cout<<"\t\t\tIngrese Tipo de habitacion: ";
				cin>>tipoHabitacion;
				cout<<"\t\t\tIngrese tipo de cama: ";
				cin>>tipoCama;
				cout<<"\t\t\tIngrese precio de la habitacion: ";
				cin>>precio;
				file1<<std::left<<std::setw(15)<< numeroHabitacion <<std::left<<std::setw(15)<< tipoHabitacion <<std::left<<std::setw(15) <<tipoCama  <<std::left<<std::setw(15)<< precio << "\n";
				found++;
        }
        file >> numeroHabitacion >> tipoHabitacion >> tipoCama >> precio;
    }
    file1.close();
    file.close();
    remove("hotel.txt");
    rename("temp.txt","hotel.txt");
    }

}

void HABITACIONES::borrar()
{

}

HABITACIONES::~HABITACIONES()
{
    //dtor
}
