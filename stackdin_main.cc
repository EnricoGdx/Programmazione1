using namespace std;
#include <iostream>
#include "stackdin.h"

int main () 
{
  char testi[100],res;
  init();
  do {
    cout << "\nOperazioni possibili:\n"
         << " Push (u)\n" 
         << " Pop (o)\n" 
         << " Top (t)\n" 
         << " Print (p)\n" 
	 << " Fine (f)\n";
    cin >> res;
    switch (res) {
    case 'u':
      cout << "Frase? : ";
      cin >> testi;
      if (push(testi)==FAIL)
	cout << "Memoria esaurita!\n";
      break;
    case 'o':
      if (pop()==FAIL)
	cout << "Stack vuoto!\n";
      break;
    case 't':
      if (top(testi)==FAIL)
	cout << "Stack vuoto!\n";
      else cout << "Top = " << testi << endl;
      break;
    case 'p':
      print();
      break;
    case 'f':
      break;
    default:
      cout << "Opzione errata\n";
    }
  } while (res != 'f');
  dealloc();
 
 return 0;

}

