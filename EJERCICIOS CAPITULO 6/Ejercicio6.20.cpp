#include <iostream>
using namespace std;

int multiple(int x, int y){
    if(y == 0){
        cout << "no se puede dividir";
    }
    if(x % y == 0){
        cout << y << " Si es un multiplo de: " << x;
    }else {
        cout << y <<" No es multiplo de: " << x;
        }
    }


int main(){

    int x;
    int y;

    char repetir;

    do{
    cout <<"Primer numero: " << endl;
    cin >> x;
    cout <<"Segundo numero: " << endl;
    cin >> y;
    int resultado = multiple(x,y);
    cout << resultado << endl;

    cout <<"Si quieres hacerlo de nuevo presiona s o S: "<< endl;
    cin >> repetir;

}while (repetir == 's'||repetir == 'S');
 cout <<"program termiando"<< endl;
    return 0;
}
