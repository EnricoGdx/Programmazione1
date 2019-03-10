using namespace std;
#include <iostream>

int main() 
{ 
  int n,dim=3,x=0; int v[dim]; char risp;
  
  cout << "dimensione dell'array?: ";
  cin >> dim;
  for (int i=0; i<dim; i++) {
     cout<<"v[" << i << "]?  ";
     cin >> v[i];}

  cout << "L'array e': " << endl;

  for (int i=0; i<dim; i++) {
     cout<< v[i] << "   ";}

  cout << "Vuoi togliere un elemento? s|n  ";
  cin >> risp;
   
  if (risp=='s') {
     
       cout << "inserire il numero " << endl;
       cin >> n;
       for (int i=dim; i>0; i--) {
           if(v[i]==n) {
             x++;
             v[i]=v[i+1];
           }
       }

       dim-=x;
  
       cout << "Adesso l'array e':  "<< endl;
       for (int i=0; i<dim; i++) {
              cout<< v[i] << "   ";}
   }
   return 0;
}
  
