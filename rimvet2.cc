#include <iostream>


using namespace std;
//funzione secondo grado nei reali.


int main() 

{
  int n=6,x,c,d; 
  double v[n];
 
  cout << "quanti elementi ha il vettore? " << endl;
  cin >> n;  
  d=n;
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
	 c=i-1;
         
         while (v[c]==x && c!=n){
            c++;
            if ((v[c+1])!=x) v[c]=v[c+1];}
	           
         d--; i--; }
  } n=d;
  
  cout << "Il vettore adesso e': " << endl;

  for (int i=0; i<n; i++) {
       cout << v[i] << "    "; }  
         
  cout << endl;

  return 0;

}

 
