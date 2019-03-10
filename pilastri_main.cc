#include"pilastri.h"
#include<iostream>

using namespace std;

int main(){
  stack s;
  char frase[50],c; 
  
  init(s);
  do {
    cout << " p|push\n o|pop\n t|top\n i|print\n e|exit\n\n ";
    cin >> c;
    switch(c){
            case 'p': cout << " Frase da inserire?  ";
                    cin >> frase;
                    push(s,frase);
                    break;

            case 'o':if( pop(s)!=OK) cout << " Nessuna parola!\n";
                    break;
    
            case 't':if( top(s,frase)!=OK) cout << " Nessuna parola!\n";
                     else cout << " La frase e':  " << frase << endl;
                     break;

            case 'i': print(s);
                     break;
    }
  } while(c!='e');
  
  if(dealloc(s)==false) cout << " La lista non e' stata deallocata\n";
  return 0;
}        
