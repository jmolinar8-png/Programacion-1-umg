#include <iostream>
using namespace std;

int invertirDigitos(int num){
    int invertido = 0;
    int restante;

    while (num >0){
        restante = num % 10;
        invertido = (invertido * 10) + restante;
        num = num /10;
    }
    return invertido;
}

int main(){
    int n;

    cout<< "introduce un numero entero: ";
    cin >> n;
    cout << "Numero invertido: "<< invertirDigitos(n)<< endl;
    return 0;
}
