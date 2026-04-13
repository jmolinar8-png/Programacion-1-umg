#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

//construtor parametrizado de la clase config,  iniciliza las características y atributos de la clase Config

Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    //Se usa this-> para diferenciar los atributos de la clase de los parámetros de entrada
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}

// Método para mostrar el menú y cambiar la configuración del juego
void Config::menuConfiguracion()
{
    int opciones;
    int valorIngresado;
    bool repetir = true;
    do
    {
        // Se muestra la configuracion para usar los metdos get
        system("cls");
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        if (opciones!=6) // si la opcion no es salir (6) pide de nuevo valor
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }
        switch (opciones) // estructura para decidir que atributo actualizar segun la opcion elegida
        {
            // se actualiza columas o minas y (true/false)
        case 1:
            {
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }
        case 2:
            {
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }
        case 3:
            {
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;
                break;
            }
        case 5:
            {
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }
        case 6: repetir = false; // cambia a false para romper el bucle y salir
                break;
        }
        system("pause");
    } while (repetir);
}

// Se usan los metodos getter y setter


int Config::getfilasTablero()
{
    return this->filasTablero;
}
// Obtiene la cantidad de filas y Guarda la cantidad de filas enviada como parámetro
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero;
}
// Obtiene la cantidad de columnas y guarda la cantidad de columnas enviada como parametro
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;
}

//se repite la logia para minas, modo y vida
int Config::getminasTablero()
{
    return this->minasTablero;
}
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero;
}
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;
}
int Config::getvidasTablero()
{
    return this->vidasTablero;
}
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero;
}


