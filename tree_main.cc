using namespace std;
#include <iostream>
#include "tree.h"

int main () 
{
  tree t; tree u;
  int val; char res;
  init(t);
  do {
    cout << "\nOperazioni possibili:\n"
         << " insert (u)\n" 
         << " search (o)\n" 
         << " dealloc (t)\n" 
         << " Print (p)\n" 
	 << " Fine (f)\n"
         << " Max(m)\n\n";
    cin >> res;
    switch (res) {
    case 'u':
      cout << "Val? : ";
      cin >> val;
      if (insert(t,val)==FAIL)
	cout << "Memoria esaurita!\n";
      break;
    case 'o':
      cout << "Valore?   ";
      cin >> val;
      u=search(t,val);
      if (u==NULL)
	cout << "non trovato!\n";
      else cout << u->value << endl;
      break;
    case 't':
      dealloc(t);
      break;
    case 'p':
      print(t);
      break;
    case 'm':
       val=max(t);
       cout<< "Il massimo e':  " << val << endl;
      break;

    case 'f':
      break;
    default:
      cout << "Opzione errata\n";
      break;
    }
  } while (res != 'f');

  return 0;
}

