#include <iostream>
using namespace std;

int main(){
    for(int fila =1; fila <=10; fila++){
        if(fila %2 ==0){
            cout << " ";
        }
        for(int columna=1; columna <=10; columna++){
            cout <<"* ";
        }
            cout << endl;
    }
    return 0;
}
