#include "Juego.h"
#include <fstream>
#include <unistd.h>

//Funcion para generar un numero al azar entre un minimo y maximo aleatorio
int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}
// obtiene una fila al azar dentro de los limites
	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}
// obtiene una columna al azar dentro de los limites
	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}
//constructor: recibe el trablero, guarda las minas y las coloca de una vez
	Juego::Juego(Tablero tablero, int cantidadMinas)
	{
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->colocarMinasAleatoriamente(); //llama la funcion llenar el mapa
	}
//logica que permite colocar las minas en lugares al azar sin repetir posicion
	void Juego::colocarMinasAleatoriamente()
	{
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;
			}
		}
	}
// Pide al usuario cual fila y resta 1
	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}
//pide al usuario cual columna
	int Juego::solicitarColumnaUsuario()
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1;
	}
// //Verifica si el jugador ya descurbrio todas las celdas que no tienen minas
	bool Juego::jugadorGana()
	{
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
		if (conteo == 0) //si el conteo es 0 significa que gano
		{
			return true;
		}
		else
		{
			return false;
		}
	}
// Funcion que repite hasta que ganes o pierdas
	void Juego::iniciar()
	{
		int fila, columna;
		while (true)
		{
			this->tablero.imprimir();//imprime  el tablero en pantalla
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();
			//
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);
			if (!respuestaAUsuario)
			{
				cout << "Perdiste el Juego\n";
				this->tablero.setModoDesarrollador(true); // muestra las minas
				this->tablero.imprimir();
				break; // sale del bucle porque el juego termino
			}

			if (this->jugadorGana())
			{
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break; // sale del bucle porque se ha ganado
			}
		}
	}
