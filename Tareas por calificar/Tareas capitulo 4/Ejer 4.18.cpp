#include <iostream>
using namespace std;

int main(){
    int numero1 = 1;
    int numero2 = 0;
    int resultado1;
    int resultado2;
    int resultado3;

    resultado1 =numero1 * 10;
    resultado2 = numero1 * 100;
    resultado3 = numero1 *1000;

    cout <<"N\t10*N\t100*N\t1000*N"<< endl;
        while(numero2<5){
                numero2++;
            cout <<numero2 <<"\t" << resultado1 << "\t" << resultado2 <<"\t"<<resultado3<< endl;
            numero1++;
            resultado1 =numero1 * 10;
            resultado2 = numero1 * 100;
            resultado3 = numero1 *1000;
        }
return 0;
}
