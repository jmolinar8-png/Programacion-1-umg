#include <iostream>
using namespace std;

int calcularCociente(int a, int b){
    int c = a/b;
    return c;
}

int calcularResiduo(int a, int b){
    int c = a%b;
    return c;
}

void separarDigitos(int numero) {
    int divisor = 10000;
    bool numero1 = false;

    while (divisor >= 1){
        int digito = calcularCociente(numero, divisor);
        if (digito > 0 || numero1|| divisor ==1){
            cout << digito << " ";
            numero1 = true;
        }
        numero = calcularResiduo(numero, divisor);
        divisor = calcularCociente(divisor, 10);
    }
    cout << endl;
}

int main(){
int n;
    cout << "ingrese un entero entre 1 y 32767: ";
    cin >> n;
     if (n>=1 && n <= 32767){
        separarDigitos(n);
     }else {
     cout << "numero fuera de rango." << endl;
     }
    return 0;
}
