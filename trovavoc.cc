// scrivere un programma che prenda da file un testo e trascriva su un altro file le vocali e consonanti presenti nel testo 

#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;


int main(int argc,char * argv[]) 
{

  char c; int i=0,j=0;

  if (argc!=3) {
       cerr << "numero imput sbagliato" << endl;
       exit(0);}
  
  fstream fileIn,fileOut;

  fileIn.open(argv[1],ios::in);
  fileOut.open(argv[2],ios::out);
 
  while(fileIn.get(c)) {
          
       if ((c>='a' && c<='z') || (c>='A' && c<='Z'))  

              switch(c){
                           case 'a': case 'A':
                           case 'e': case 'E':
                           case 'u': case 'U':
                           case 'i': case 'I':
                           case 'o': case 'O':
                             i++; break;
                           default: j++;}
        
  }
 
  fileOut << "vocali: " << i << "   consonanti: " << j << endl;
    

  fileIn.close();
  fileOut.close(); 
   
  return 0;
}
