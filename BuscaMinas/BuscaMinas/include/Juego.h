#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"

class Juego //nueva clase y sus constructores
{
private:
    //atributos privados que solo la clase juego puede verlos
	Tablero tablero;
	int cantidadMinas;
    //variables que son de ayuda para generar posciones
	int aleatorio_en_rango(int minimo, int maximo);
	int filaAleatoria();
	int columnaAleatoria();
public:
    //constructor parametrizado configura las minas y trablero al crear el objeto
    Juego(Tablero tablero, int cantidadMinas);
	void colocarMinasAleatoriamente(); //Da aleatoriedad para las minas
	int solicitarFilaUsuario();        // Le pide al usuario coordenada y (filas)
	int solicitarColumnaUsuario();     // le pide al usuario coordenada x (columnas
	bool jugadorGana();
	void iniciar();                      // contiene el bucle del juego
	//void dibujarPortada(string nombreArchivo);
};
#endif // JUEGO_H
