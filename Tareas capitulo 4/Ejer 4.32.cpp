#include<iostream>
using namespace std;

int main(){
    double lado1=0;
    double lado2=0;
    double lado3=0;

    cout<<"Ingresa el valor del primer lado: "<<endl;
    cin >>lado1;
    cout<<"Ingresa el valor del segundo lado: "<<endl;
    cin >>lado2;
    cout<<"Ingresa el valor del tercer lado: "<<endl;
    cin >>lado3;

    if(lado1 == lado2 && lado2 == lado3){
        cout<<"Estos valores pueden representar los lados de un triangulo"<<endl;
    }else {
        cout<<"Los tres valores no son iguales entre si, no pueden ser un triangulo"<< endl;
    }
    return 0;
}
