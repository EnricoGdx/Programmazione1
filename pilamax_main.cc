using namespace std;
#include <iostream>
#include "pilamax.h"

int main () 
{
  char res;stack s;
  int val;
  init(s);
  do {
    cout << "\nOperazioni possibili:\n"
         << " Push (u)\n" 
         << " Pop (o)\n" 
         << " Top (t)\n" 
         << " Print (p)\n" 
	 << " Fine (f)\n"
         << " Reverse print (r)\n"
         << " Max(m)\n\n";
    cin >> res;
    switch (res) {
    case 'u':
      cout << "Val? : ";
      cin >> val;
      if (push(s,val)==FAIL)
	cout << "Memoria esaurita!\n";
      break;
    case 'o':
      if (pop(s)==FAIL)
	cout << "Stack vuoto!\n";
      break;
    case 't':
      if (top(s,val)==FAIL)
	cout << "Stack vuoto!\n";
      else cout << "Top = " << val << endl;
      break;
    case 'p':
      print(s);
      break;
    case 'm':
      if(max(s,val)==OK) cout << "Il massimo e':  " << val << " ed e' apparso " << time_number(s,val) << "  volte\n";
      break;
    case 'r':
       rev(s);
       break;
    case 'f':
      break;
    default:
      cout << "Opzione errata\n";
      break;
    }
  } while (res != 'f');

}

