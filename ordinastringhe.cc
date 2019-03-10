#include<iostream>
#include<cstring>

using namespace std;

typedef char** matrix;

matrix get(matrix string,int dim);
void ordina(matrix string,int dim);
void cordina(matrix string,int& b,int& c,int dim);
void swap(char a[],char b[],int dim);
void dealloc(matrix string,int dim);

int main(){
 
 int dim=3;
 matrix string=get(string,dim);
 ordina(string,dim);
 for(int i=0;i<dim;i++){
   cout << string[i] << endl;}
 dealloc(string,dim);
}


matrix get(matrix string,int dim){
 
   string=new char*[dim];
   for(int i=0; i<dim; i++){
     string[i]=new char[dim];
     cout << "frase?   " ;
     cin >> string[i];} 
   return string;
}

void ordina(matrix string,int dim){
  
  int b=0; int c=dim; 
  cordina(string,b,c,dim);
}

void cordina(matrix string,int& b, int& c,int dim){

  bool e=false;
  if(strcmp(string[b],string[b+1])>0){ swap(string[b],string[b+1],dim); e=true;}
  b++; 

  if(b<dim-1) cordina(string,b,c,dim);
  if(c>0 && e==true){
     c--; b=0;
     cordina(string,b,c,dim);}
}

void swap(char a[],char b[],int dim){

  char c[dim]; 
  strcpy(c,a);
  strcpy(a,b); 
  strcpy(b,c); 
}

void dealloc(matrix string,int dim){
   for(int i=0;i<dim;i++){
     delete string[i];}
   delete string;
}


  
   
