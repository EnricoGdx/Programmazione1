using namespace std;
#include <iostream>
#include "queue.h"

int main () 
{
  char res;
  message* m;  
  init();
  do {
    cout << "\nOperazioni possibili:\n"
         << "Enqueue (e)\n" 
         << "First (f)\n" 
         << "Dequeue (d)\n" 
         << "Print (p)\n" 
         << "Exit (x)\n";
    cin >> res;
    switch (res) {
    case 'e':
     { message* tmp= new (nothrow) message;
      if(tmp!=NULL){
      cout << "frase   : ";
      cin >> tmp->testo;
      if (enqueue(tmp)==FAIL)
        cout << "Coda piena\n";
      }
      break;}
    case 'f':
      if (first(m)==FAIL)
        cout << "Coda vuota\n";
      else 
        cout << "frase   " << m->testo << endl;
      break;
    case 'd':
      if (dequeue()==FAIL)
        cout << "Coda vuota\n";
      break;
    case 'p':
      print();
      break;
    case 'x':
      break;
    default:
      cout << "Valore errato!\n"; 
      break;
    }
  } while (res != 'x');  
   dealloc(); 
  return 0; 
}

    

