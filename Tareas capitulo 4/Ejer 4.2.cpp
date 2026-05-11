#include <iostream>
using namespace std;


int main() {
   int x = 0;

   x = x + 1;
   cout << "Forma 1 (x = x + 1): " << x << endl;

   x += 1;
   cout << "Forma 2 (x += 1):    " << x << endl;

   ++x;
   cout << "Forma 3 (++x):       " << x << endl;

   x++;
   cout << "Forma 4 (x++):       " << x << endl;

   return 0;
}
