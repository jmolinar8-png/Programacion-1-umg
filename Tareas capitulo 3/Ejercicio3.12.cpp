#include<iostream>
using namespace std;

class Cuenta {
public:
int Saldo;
int Abonar;
int Cargar;
Cuenta (int pSaldo,int pAbonar, int pCargar)
{
    Saldo = pSaldo;
    Abonar = pAbonar;
    Cargar = pCargar;
}

void comienzo()
{
 if(Saldo < 1){
   cout <<"Su saldo es 0.00" << endl;
    } else  {
    cout <<"Tu saldo es de: "<< Saldo << endl;
    }
}
void abono()
{
    cout<<"Tu abono fue de: "<< Abonar << endl;
}
void finaltransaccion(){
 if (Cargar > Saldo){
    cout <<"El monto a cargar excede el saldo de la cuenta" << endl;
 } else {
      cout <<"Tu saldo actual es de: "<< Saldo + Abonar - Cargar << endl;
 }
}
};

int main()
{
    Cuenta Cuenta1(500,800,400);
    Cuenta1.comienzo();
    Cuenta1.abono();
    Cuenta1.finaltransaccion();

    Cuenta Cuenta2(0, 500, 600);
    Cuenta2.comienzo();
    Cuenta2.abono();
    Cuenta2.finaltransaccion();
     return 0;

}
