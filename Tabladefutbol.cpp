// Ejemplo de utilización de matrices codigo heredado de C
//Declaraciòn de Bibliotecas y librerias estandar de C++
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;
//Declaraciòn de Constantes
#define NUMERO_EQUIPOS 5
#define NUMERO_PARTIDOS 5
#define MAX_CALIFICACION 3
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

//Declaraciòn de Prototipos de Funciòn
void llamaCiclo();   //Funciòn que controla el Ciclo comparativo de datos por todas las facultades
int busquedaAleatorios(int minimo, int maximo); //Funciòn que permite obtener valores aleatorios en las notas de cada alumno
void llenarMatriz(float matriz[NUMERO_EQUIPOS][NUMERO_PARTIDOS + 1]); //Funciòn que permite asignar a cada alumno las notas aleatorios
void imprimirMatrizLinea(); //Funciòn que apoya el despliegue de titulos en el comparativo de facultades
float imprimirMatriz(float matriz[NUMERO_EQUIPOS][NUMERO_PARTIDOS + 1], char alumnos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA], string nombreLiga);
//Funciòn que permite el despliegue de cada facultad con sus alumnos y el calculo de promedios (menor y mayor)
int main()
{
    srand(getpid()); //Proceso preparativo para generaciòn de valores aleatorios
    llamaCiclo();
    return 0;
}




