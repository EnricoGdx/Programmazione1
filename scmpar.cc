using namespace std;
#include<iostream>
#include<cstdlib>
#include<fstream>

int contaparole(char file[]);
static const int DIM_WORLD=20;
void stampaparole (char* matrix[],int dim);
void check_word(char *parola);

int main(int argc, char* argv[]){

  if(argc!=2){
    cerr << "Numero imput sbagliato" << endl;
    exit(0);
  }

  fstream myin;
  int dim;

  myin.open(argv[1],ios::in);
  dim=contaparole(argv[1]);
  char** parole=new char* [dim];
  for(int i=0;i<dim;i++){
      parole[i]=new char [DIM_WORLD];
      myin >> parole[i];
      check_word(parole[i]);
  }
  stampaparole(parole,dim);

  myin.close();
 
   return 0;
}

int contaparole(char file[]){
 
  fstream myin; int dim=0;char tmp[DIM_WORLD];
  myin.open(file,ios::in);
  while(myin >> tmp) dim++;
  myin.close();
  return dim;
}

void stampaparole (char* matrix[],int dim) {
  
  for(int i=0; i<dim; i++){
      cout << matrix[i]<< endl;
  }
}

   
void check_word(char *parola){
   for(int i=0;parola[i]!='\0';i++){
      if (!(parola[i]>='a' && parola[i]<='z' || (parola[i]>='A' && parola[i]<='Z'))) parola[i]='\0';
   }
}
