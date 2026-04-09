#include "tablafutbol.h"
#include <iostream>
#include <iomanip>
 using namespace std;

tablafutbol::tablafutbol()
{

}
void tablafutbol::llamaCiclo()
{
    //declaracion de matriz
    int matrizLaliga[NUMERO_EQUIPOS][NUMERO_PARTIDOS+1];
    char ciclo;
    bool repetir = true;
    //declaracion de variables que guardara el resultado de la tabla

    //declaracion de los nombres de los equipos en la matriz, filas
    char equipos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA]= {"Real Madrid CF","FC Barcelona","Atletico De Madrid","Real Sociedad","Atlethic Club","Real Betis", "Villarreal CF","Girona FC","valencia FC","Getafe CF"};
// ciclo de comparaciones entre equipos

do {
    system("cls");

    cout <<"========================================" << endl;
    cout <<" SIMULADOR DE TEMPORADAD 2026: LA LIGA " << endl;
    cout <<"========================================"<< endl;

    //ejecucion de funciones
    llenarMatriz(matrizLaliga);
    //imprime la matriz y muestra los resultados
    imprimirMatriz(matrizLaliga, equipos, "Resultados oficiales");
    cout << endl <<"¿Quieres simular una nueva temporada? (n/N): ";
    cin >> ciclo ;

        if (ciclo == 'n' || ciclo == 'N') { // Si el usuario dice que no
        repetir = true;                // se apaga el ciclo
    }

} while (repetir);
cout <<"Simulacion terminada." << endl;
}

void tablafutbol::llenarMatriz(int matriz[NUMERO_EQUIPOS][NUMERO_PARTIDOS + 1])
{
    //Funciòn que permite llenar cada matriz con valores aleatorios
    int y, x;
    int opciones[]= {0,1,3};
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        int suma = 0;
        int calificacion = 0;
        for (x = 0; x < NUMERO_PARTIDOS; x++)
        {
            int indiceAleatorio = rand()%3;
            int calificacion = opciones[indiceAleatorio];

            suma += (float)calificacion;
            matriz[y][x] = calificacion;
        }

        matriz[y][NUMERO_PARTIDOS] = suma;
    }
}

void tablafutbol::imprimirMatrizLinea()
{
    //Funciòn que despliega titulo de cada nota calculada
    int x;

        cout << "+----------";
    for (x = 0; x < NUMERO_PARTIDOS + 1; x++)
    {
        cout << "+----------";
    }
    cout << "+\n";
}
int tablafutbol::imprimirMatriz(int matriz[tablafutbol::NUMERO_EQUIPOS][tablafutbol::NUMERO_PARTIDOS + 1], char equipos[tablafutbol::NUMERO_EQUIPOS][tablafutbol::MAXIMA_LONGITUD_CADENA], string nombreLiga)
{
    //Funciòn que imprime la matriz en pantalla y realizando los calculos necesarios del promedio
    int y, x;

    int puntosCampeon = -1;
    int puntosSubcampeon = -1;
    int puntosDescenso = 100;

    char equipopuntajemayor[MAXIMA_LONGITUD_CADENA];
    char equipoSubcampeon[MAXIMA_LONGITUD_CADENA];
    char equipoPeor[MAXIMA_LONGITUD_CADENA];

    memcpy(equipopuntajemayor, equipos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(equipoSubcampeon, equipos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(equipoPeor, equipos[0], MAXIMA_LONGITUD_CADENA);
    cout << nombreLiga << endl;
    cout << "(p1)=>jornada 1  (p2)=>jornada 2 (p3)=>jornada 3 (p4)=>jornada 4 " << endl;
    imprimirMatrizLinea();
    cout << "!" << setw(15) << "Equipo   " << "!";
    for (x = 0; x < NUMERO_PARTIDOS; x++)
    {
        cout << setw(4) <<"      P" << x + 1 << "!";
    }

    cout << setw(5) << "     Total" << endl;
    imprimirMatrizLinea();

    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << "!" << setw(15) << equipos[y] << "!";

        for (x = 0; x < NUMERO_PARTIDOS; x++)
        {
            int puntos = matriz[y][x];
            cout << setw(8) << puntos << "!";
        }
        int resultado1 = matriz[y][NUMERO_PARTIDOS];
        if (resultado1 > puntosCampeon) //Se va guardando la nota mayor y el nombre del alumno
        {
            puntosSubcampeon = puntosCampeon;
            memcpy(equipoSubcampeon, equipopuntajemayor, MAXIMA_LONGITUD_CADENA);

            puntosCampeon = resultado1;
            memcpy(equipopuntajemayor, equipos[y],MAXIMA_LONGITUD_CADENA);
        }
        else if (resultado1 > puntosSubcampeon) //Se va guardando la nota menor y el nombre del alumno
        {
            puntosSubcampeon = resultado1;
            memcpy(equipoSubcampeon, equipos[y], MAXIMA_LONGITUD_CADENA);
        }
        //Buscar el peor equipo para el descenso
        if (resultado1 < puntosDescenso){
            puntosDescenso = resultado1;
            memcpy(equipoPeor, equipos[y], MAXIMA_LONGITUD_CADENA);
        }

        cout << setw(10) << resultado1 << "!" << endl;
        imprimirMatrizLinea();
    }
    //Calculo del promedio general de cada facultad
    cout << "Ganador de la liga: " << equipopuntajemayor << " con " << puntosCampeon <<" pts" << endl;
    cout << "Pase para champions: " << equipopuntajemayor << "y " << equipoSubcampeon<< " con " << puntosSubcampeon << " pts" << endl;
    cout << "zona de descenso: " <<  equipoPeor << " con " << puntosDescenso << " pts"<< endl;
    return 0;
    }






