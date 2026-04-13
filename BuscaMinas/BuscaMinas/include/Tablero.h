#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>
#include "Celda.h"

using namespace std;


class Tablero
{
    public:
        // Constructores: uno vacio y otro que confugura el tamaño inicial
        Tablero();
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);
        // Getter y setters para leer y modificar los valores del tablero
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);

        // Metodos de la clase que se encargan de mostrar el tablero esteticamente en consola
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();

        //logica del juego colocar minas, revela celdad y contar
        bool colocarMina(int x, int y);
        bool descubrirMina(int x, int y);
        int contarCeldasSinMinasYSinDescubrir();

    protected:

    private:
        int alturaTablero, anchoTablero;
        bool modoDesarrollador;
    // Matriz de objetos tipo 'Celda' que guarda el estado de cada cuadro
        vector<vector<Celda> > contenidoTablero;

        string getRepresentacionMina(int x, int y);
        int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
