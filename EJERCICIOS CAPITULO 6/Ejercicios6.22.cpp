#include <iostream>
using namespace std;

char margenIzquierdo(int lado){
    for( int i= 0; i < lado ; i++){

        for(int j=0; j < lado; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int lado;

    cout <<"igrese el tamaño del lado: ";
    cin >> lado;

    margenIzquierdo(lado);
    return 0;
 }
