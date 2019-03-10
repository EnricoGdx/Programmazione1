using namespace std;
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>

void trova(char* matrix[],char c,int &n, int n_righe, int maxdim);

main(int argc, char* argv[]){

if(argc!=3){
   cerr << "Numero imput sbagliato" << endl;
   exit(0);}

fstream myin;

myin.open(argv[1],ios::in);

if(myin.fail()){
   cerr << "ERROR" << endl;
   exit(0);}

int n_righe=atoi(argv[2]);
int maxdim=80, n=0;

char c;
char** matrix= new char* [n_righe];

for(int i=0;i<n_righe;i++){
  matrix[i]=new char[maxdim];
  myin.getline(matrix[i],maxdim);
} 

myin.close();

for(int i=0;i<n_righe;i++){
  for(int j=0;j<maxdim;j++){
      if(isalpha(matrix[i][j])){
        c=matrix[i][j];
        trova(matrix,c,n,n_righe,maxdim);
        cout << "La lettera  " << c << " e' apparsa  " << n << "  volte\n";
        n=0;
      }        
  }
}
for(int i=0;i<n_righe;i++){
  delete [] matrix[i];}

delete [] matrix;
 
return 0;
}


void trova(char* matrix[],char c,int &n, int n_righe, int maxdim){
  for(int i=0;i<n_righe;i++){
      for(int j=0;j<maxdim;j++){
          if(matrix[i][j]==c){
            n++;
            matrix[i][j]='.';
          }
       }
  }

}
    


