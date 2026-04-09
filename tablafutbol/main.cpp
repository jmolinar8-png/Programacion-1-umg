#include <iostream>
#include "tablafutbol.h"
using namespace std;

int main()
{
    tablafutbol tabla1;
    srand(time(0)); //Proceso preparativo para generaciòn de valores aleatorios
    tabla1.llamaCiclo();
    return 0;
}
