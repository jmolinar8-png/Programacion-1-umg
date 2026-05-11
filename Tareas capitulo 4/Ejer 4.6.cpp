#include <iostream>
using namespace std;

int main(){
    unsigned int producto = 5;
    unsigned int cociente = 5;
    unsigned int x = 5;

    producto *= x++;
    cout <<"El valor de las variables es 5, el valor del calculo (producto *= x++) es de : "<< producto << endl;
    cociente /= ++x;
    cout <<"El valor de las variables es 5, el valor del calculo (cociente /= ++*) es de: "<< cociente << endl;
    return 0;
}
