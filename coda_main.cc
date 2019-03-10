using namespace std;
#include <iostream>
#include "coda.h"

int main () 
{
  char res;queue q;
  int val;
  init(q);
  do {
    cout << "\nOperazioni possibili:\n"
         << " enqueue (u)\n" 
         << " dequeue (o)\n" 
         << " first (t)\n" 
         << " Print (p)\n" 
	 << " Fine (f)\n"
         << " Max(m)\n\n";
    cin >> res;
    switch (res) {
    case 'u':
      cout << "Val? : ";
      cin >> val;
      if (enqueue(q,val)==FAIL)
	cout << "Memoria esaurita!\n";
      break;
    case 'o':
      if (dequeue(q)==FAIL)
	cout << "coda vuota!\n";
      break;
    case 't':
      if (first(q,val)==FAIL)
	cout << "coda vuota!\n";
      else cout << "Top = " << val << endl;
      break;
    case 'p':
      print(q);
      break;
    case 'm':
      if(max(q,val)==OK) cout << "Il massimo e':  " << val << " ed e' apparso " << time_number(q,val) << "  volte\n";
      break;

    case 'f':
      break;
    default:
      cout << "Opzione errata\n";
    }
  } while (res != 'f');
  dealloc(q);

  return 0;
}

