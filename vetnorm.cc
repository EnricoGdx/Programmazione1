#include <iostream>
#include <math.h>


using namespace std;
//funzione secondo grado nei reali.


int const dim=3;
void norma(double v[dim], double &nor);

int main() 

{
  double v[dim];
  double nor=0;

  for(int i=1;i<4;i++){
    cout << "valore di v?" << "   ";
    cin >> v[i]; }

  norma(v,nor);

  cout << endl << "La norma  e': " << nor << endl;
  cout << endl << "Il vettore normalizzato  e': " <<  endl << endl;

  for(int i=1;i<4;i++){

     v[i]/=nor ;
     cout << v[i] << "   ";
      }  
   
  cout << endl << endl;

  return 0;
}


void norma(double v[dim],double &nor) {

   double somma=0,xp;

    for (int i=1;i<4;i++) {
       xp=v[i]*v[i];
       somma+=xp; }

   nor= sqrt(somma);

}
  

 
