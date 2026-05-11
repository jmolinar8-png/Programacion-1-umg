#include <iostream>
using namespace std;

int main(){
    //diametro, circunferencia, y el area de un circulo
    int opcion;
    double radio;

    do {
    system("cls");
    cout<<"1.Calcular Diametro"<< endl;
    cout<<"2.Calcular Circunferencia" <<endl;
    cout <<"3.Calcular Area"<<endl;
    cin>>opcion;

    if(opcion==1){
        cout<<"Ingresa el radio del circulo: " << endl;
        cin >> radio;
        double diametro = radio *2;
        cout<<"El Diametro del circulo es: "<< diametro << endl;
    }
    if(opcion==2){
        cout<<"Ingresa el radio del circulo: "<< endl;
        cin >> radio;
        double circunferencia = 2*radio*3.14159;
        cout<<"La circunferencia del circulo es: "<< circunferencia<<endl;
    }
    if(opcion==3){
        cout<<"Ingresa el radio del ciruclo: "<< endl;
        cin >>radio;
        double area = 3.14159*(radio*radio);
        cout<<"El area del circuo es: "<<area<<endl;
    } else if(opcion>4){
        cout<<"Debes ingresar 1,2 o 3 para seleccionar una opcion"<<endl;
        system("pause");
    }
    } while (opcion<1||opcion >3);
    return 0;
}
