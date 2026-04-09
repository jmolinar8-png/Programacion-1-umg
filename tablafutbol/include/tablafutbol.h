#ifndef TABLAFUTBOL_H
#define TABLAFUTBOL_H
#include <iostream>
using namespace std;


class tablafutbol
{
     private:

        static constexpr int NUMERO_EQUIPOS = 10;
    static constexpr int NUMERO_PARTIDOS = 4;
    static constexpr int MAX_CALIFICACION = 3;
    static constexpr int MIN_CALIFICACION = 0;
    static constexpr int MAXIMA_LONGITUD_CADENA = 100;

    public:
     //Declaraciòn de Prototipos de Funciòn
     tablafutbol();
    void llamaCiclo();   //Funciòn que controla el Ciclo comparativo
    void llenarMatriz(int matriz[NUMERO_EQUIPOS][NUMERO_PARTIDOS+1]); //
    void imprimirMatrizLinea(); //Funciòn que apoya el despliegue de titulos en el comparativo de facultades
    int imprimirMatriz(int matriz[NUMERO_EQUIPOS][NUMERO_PARTIDOS+1], char equipos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA], string nombreLiga);
    protected:

};

#endif // TABLAFUTBOL_H
