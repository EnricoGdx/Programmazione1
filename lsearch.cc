#include <iostream>

using namespace std;
//funzione secondo grado nei reali.

int search (int v[],int x,int &j, int &c, int n,int &conta);

int main() 

{
  int n,x,c,j=0,conta=0;

  cout << "Il numero di elementi  e': " <<endl;
  cin >> n; 

  int v[n];

  for(int i=0;i<n;i++){
    cout << "valore di v?" << "     ";
    cin >> v[i];  }
 
  cout << endl << "L'elemento da trovare  e': " <<endl;
  cin >> x; cout << endl;

  if (v[0]==x) {
       c=0;}
  else if (v[n-1]==x) {
       c=n-1;}
  else {
       search(v,x,j,c,n,conta);}

  cout <<  "l'elemento e' nella posizione: " << j << endl;
   
  return 0;
}

  
int search (int v[], int x, int &j, int &c, int n, int &conta) {
  
  conta++;

  if (conta>20) return 0;

  c=(v[(j+n-1)/2]);  cout << "c" << c << endl << "j" << j;
  
  if (c==x) c--;

  if (v[j]==x) return 0;

  else {
         if(c<x) { 
              if( c+(c/2)+1 < n) {j=c+(c/2)+1; search(v,x,j,c,n,conta);}
              else {j=c+(c/5); search(v,x,j,c,n,conta);}
         }
         else {
               j=c-(c/2)+1; search(v,x,j,c,n,conta);}
  }
 
 return 0;
}
  
