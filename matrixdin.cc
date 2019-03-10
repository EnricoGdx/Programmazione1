using namespace std;
#include<iostream>
#include<cstring>

typedef char** matrix;
matrix get(int& d1,int& d2);
void print(matrix a,int& d1,int& d2);
void dealloc(matrix a,int &d1,int& d2);

int main(){
  int d1,d2;
  matrix a=get(d1,d2);
  print(a,d1,d2);
  dealloc(a,d1,d2);
return 0;
}

matrix get(int& d1,int& d2){

  cout << "quante parole?  ";
  cin >> d1;
  cout << "Scrivere una stima approssimata per eccesso della lunghezza delle parole  ";
  cin >> d2;

  matrix a=new char*[d1];
  for(int i=0;i<d1;i++){
    a[i]= new char[d2];
    cout << "Parola?   "; cin >> a[i];}

return a;
}

void print(matrix a,int& d1,int& d2){
  for(int i=0;i<d1;i++){
   cout << "Parola " << i << "    " << a[i] << endl;}
}

void dealloc(matrix a,int &d1,int& d2){
  
   for(int i=0;i<d1;i++){
     delete[] a[i];}

   delete[] a;
}


