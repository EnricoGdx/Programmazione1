#include <iostream>


using namespace std;
//funzione secondo grado nei reali.

int  c,dim,x ; int v[dim];

void co ( int c, int &v[dim], int x);

int main() 

{
  int n,x; 
  int v[dim];
 
  cout << "quanti elementi ha il vettore? " << endl;
  cin >> n; dim=n;
  cout << "scrivi gli elementi" << endl;

  for (int i=0; i<n; i++) {
       cin >> v[i]; }

  cout << "Il vettore e': " << endl;

  for (int i=0; i<n; i++) {
      cout << v[i] << "    "; }  

  cout << endl << "scrivi l'elemento da togliere" << endl;
  cin >> x;

  for (int i=0; i<n; i++) { 
       if (v[i]==x) {
	 c=i-1; co(c,v,x);
          
         n-=1; i-=1; dim=n; }
  }
  
  cout << "Il vettore adesso e': " << endl;

  for (int i=0; i<n; i++) {
       cout << v[i] << "    "; }  
         
  cout << endl;

  return 0;
}


void co ( int c, int &v[dim],int x) {
    
         c++;
         if ((v[c+1])!=x) v[c]=v[c+1];
         else co (c,v[c],x); }

 
