#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    char repetir;

    do {
    int n;
    n = 1 + rand()%(1+2-1);
    cout << "a) " << n << endl;

    n = 1 + rand()% (100-1+1);
    cout <<"b) " << n << endl;

    n = 0 + rand() % (9 - 0 + 1);
    cout << "c) " << n << endl;

    n = 1000 + rand() % (1112 - 1000 + 1);
    cout << "d) " << n << endl;

    n = -1 + rand() % (1 - (-1) + 1);
    cout << "e) " << n << endl;

    n = -3 + rand() % (11 - (-3) + 1);
    cout << "f) " << n << endl;

    cout<< "¿Desea tener otros resultados aleatorios? (presiones s o S para continuar): ";
    cin >> repetir;
    } while (repetir == 's' || repetir == 'S');

    return 0;

}


