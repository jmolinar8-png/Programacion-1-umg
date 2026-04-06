//Algoritmo que permitera saber si un numero es par o impar
 #include <iostream>

 using namespace std;
  int main()
  {
      int numero = 0;

      cout <<"Ingresa un numero entero: ";
      cin >> numero;

      if ( numero % 2 == 0)
        cout <<"Este numero es par" <<endl;
      if(numero % 2 == 1)
        cout <<"Este numero es impar" <<endl;
         return 0;



  }
