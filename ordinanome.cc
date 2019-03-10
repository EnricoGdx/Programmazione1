//ordiniamo nomi 

#include<iostream>
#include<cstring>

using namespace std;

const int dim=100;

void leggi_nomi(char nomi[][dim], int &n);
void ordina(char nomi[][dim], int n);
void swap(char a[dim], char b[dim]);
void stampa(char nomi[][dim], int n);

int main() {

  char nomi[dim][dim];

  int n=dim; 

  leggi_nomi(nomi,n);
  ordina(nomi,n);
  cout << endl;
  stampa(nomi,n);

  return 0;
}


void leggi_nomi(char nomi[][dim], int &n) {
    
   do {
       
        cout << "Inserisci il numero dei nomi: " << endl;
        cin >> n;} while (n<0 || n>dim);
   
   for (int i=0; i<n; i++) {
    
         cout << "Nome: " << i << ":";
         cin >> nomi[i];}
}
    
void ordina(char nomi[][dim], int n) {
      
    
   for (int i=0; i<n; i++) 
    
           for (int j=0;j+1<n-i; j++) {
                 if(strcmp(nomi[j],nomi[j+1])>0)
                       swap(nomi[j],nomi[j+1]);}
}


void swap(char a[dim], char b[dim]) {

   char temp[dim];
   strcpy(temp,a);
     
   strcpy(a,b);   
   strcpy(b,temp);    

}  


void stampa(char nomi[][dim], int n){

   for(int i=0; i<n; i++) {
       
       cout << nomi[i]<< endl;}
   
    cout << endl;
}
   
