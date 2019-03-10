#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>

using namespace std;
typedef char** matrix;

int main(int argc,char* argv[])
{
  
  fstream myin,myout;
  int dim=0,n=50; char c,ci[n];

  if(argc!=3){
     cerr << "Numero imput sbagliato" << endl;
     exit(0);
  }
  
  myin.open(argv[1],ios::in);
  myout.open(argv[2],ios::out);

  if(myin.fail()){
      cerr << "ERROR" << endl;
      exit(0);
  }

  myin.getline(ci,n); cout<< ci;
  while(myin.getline(ci,n)){ dim++;  cout<< ci;}

  matrix testo=new char* [dim];
  for(int i=0;i<dim;i++){
     testo[i]=new char[500];
     myin.getline(testo[i],500); cout << testo[i]<< endl;
  }

  for(int i=dim;i>0;i--){ 
     myout << testo[i];
  } 

  for(int i=dim;i>0;i--){
     delete testo[i];
  }
  
  delete testo;
  return 0;

}
  
  
  
   
  
