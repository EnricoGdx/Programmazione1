#include <iostream>
#include <math.h>

using namespace std;
//funzione secondo grado nei reali.

int main() 

{

  int i ;
  char v;

  i=7;
 
  cout << "Pensa ad un numero compreso tra 0 e 7." << endl << "E' il numero " << i << "?" << endl << endl << "Se si' digita s , altrimenti n" << endl;
  cin >> v;
  
  while (v=='n')  {
    
     i-=1;
     cout << "Il numero e': " << i << "?" << endl;
     cin >> v;
  } 
  cout << "Il numero e': " << i << endl;

return 0;
}
