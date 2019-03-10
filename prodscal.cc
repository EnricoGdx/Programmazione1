#include <iostream>

using namespace std;
//funzione secondo grado nei reali.


int const dim=3;
int  pscal (int v[dim], int w[dim]);

int main() 

{
  int const dim=3;
  int v[dim],w[dim] ;

  for(int i=1;i<4;i++){
    cout << "valore di v?" << "     ";
    cin >> v[i];
    cout << "valore di w?" << "     ";
    cin >> w[i];
    cout<< endl; }

  cout << "Il prodottoscalare e': " <<endl;
  
  if (pscal(v,w)==0) cout << "le rette sono incidenti" << endl;


return 0;
}


int pscal (int v[dim], int w[dim]) {
   
  int somma; int u[dim];

  for(int i=1;i<4;i++)
  {
    u[i]=v[i]*w[i];
    cout<< u[i] << "    " ;
  }
  cout << endl;
  somma=u[1]+u[2]+u[3];
  
  return somma;
}
  
  

 
