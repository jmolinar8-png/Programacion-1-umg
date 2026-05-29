#ifndef HABITACIONES_H
#define HABITACIONES_H
#include <iostream>
#include <string>
using namespace std;

class HABITACIONES
{
    public:
        void menu();
        void insertar();
        void leer();
        void modificar();
        void borrar();
        HABITACIONES();
        virtual ~HABITACIONES();

    protected:

    private:
        string numeroHabitacion, tipoHabitacion, tipoCama;
        float precio;
};

#endif // HABITACIONES_H
