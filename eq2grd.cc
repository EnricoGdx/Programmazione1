#include <iostream>
#include <math.h>

using namespace std;
//funzione secondo grado nei reali.

int main() 

{

  int a,b,c;
  double delta,x1,x2;

  cout << "inserire i coefficienti di un'equazione di secondo grado: a,b,c " << endl;
  cin >> a >> b >> c;

  delta = b*b-4*a*c;
 
  if(delta>0){
    x1=-(b+sqrt(delta))/(2*a);
    x2=-(b-sqrt(delta))/(2*a);
  
    cout<<"x1 e x2 sono: " << endl << x1 << endl << x2 << endl;}

  else if(delta==0){
    x1=(-b)/(2*a);
   
    cout<<"delta e' zero e l'unica x e': " << endl << x1 << endl;}

  else 
    
    cout<<"delta e' minore di zero percio' e impossibile" << endl;

return 0;
}
