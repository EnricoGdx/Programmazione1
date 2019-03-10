#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

void conta(int& dim,char argv[]);
void copia(char* elenco,int dim, char argv[]);
void cambia(char* elenco, char c, char v,int dim);

int main(int argc, char* argv[]){

  if(argc!=4){
    cerr << "Numero imput sbagliato\n";
    exit(0);}

  fstream myin,myapp;
  myin.open(argv[1],ios::in);
  myapp.open(argv[2],ios::in);
 
  if(myin.fail() || myapp.fail()){
    cerr << "ERROR\n";
    exit(0);}

  int dim=0;

  conta(dim,argv[1]);

  char c='a',v;
  char* elenco= new char [dim];
  
  for(int i=0;i<dim;i++){
    myin.get(v);
    elenco[i]=v;
  }

  myin.close();

  for(;c<'z';c++){
    myapp.get(v);
    cambia(elenco,c,v,dim);
  }
  
  copia(elenco,dim,argv[3]);
 
  myapp.close();

  return 0;
}


void cambia(char* elenco,char c, char v, int dim){

  for(int i=0;i<dim;i++){
    if(elenco[i]==c) elenco[i]=v;
  }

}

void copia(char* elenco,int dim, char argv[]){
    fstream myout;
    myout.open(argv,ios::out);

    for(int i=0;i<dim;i++){
      myout.put(elenco[i]);}
 
    myout.close();
}


void conta(int& dim, char argv[]){
  char c; fstream myin;
  myin.open(argv,ios::in);
  while(myin.get(c)) dim++;
  myin.close();
}

  
  
  
