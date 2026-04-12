#include <iostream>
using namespace std;

int enteroPotencial(int x, int y){
    if (y == 0){
        return 1;
    }
    else {
        return x * enteroPotencial(x,y-1);
    }
}

int main(){
    int x,y,z ;

    cout <<"Ingresa la base: " << endl;
    cin >> x;
    cout <<"ingresa el exponente: " << endl;
    cin >> y;
    cout << "Resultado: " << enteroPotencial(x,y) << endl;

    return 0;

}
