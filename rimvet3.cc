#include <iostream>

using namespace std;
//funzione secondo grado nei reali.


int main() 

{
  int n,x,c,n1=0;

  cout << "Il numero di elementi  e': " <<endl;
  cin >> n; 
  c=n;

  int v[n];

  for(int i=0;i<n;i++){
    cout << "valore di v?" << "     ";
    cin >> v[i];  }
 
  cout << "L'elemento da togliere  e': " <<endl;
  cin >> x;
  cout << endl << "Il vettore adesso e':" << endl;

  for(int i=0;i<n;i++)
  { 
    if (v[i]==x){
        c--; }  
   }

  int u[c];

  for(int i=0;i<n;i++)
  { 
    if (v[i]!=x) {u[n1]=v[i]; n1++;}    
  }

  for(int i=0;i<c;i++){ 
    cout << u[i] << "    ";} 
  
  cout << "dim= " << c << endl;
  
 
return 0;
}

  
  

 
