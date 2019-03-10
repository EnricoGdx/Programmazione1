#include <iostream>
#include <math.h>

using namespace std;
//funzione secondo grado nei complessi.

int main() 

{

  int a,b,c;
  double delta,x1,x2,i;

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
   
    delta=-delta;
    i=(sqrt(delta)/(2*a));

    cout<<"le due soluzioni complesse sono " << endl << (-b)/(2*a)<< "+" << i << "i" << endl << (-b)/(2*a)<<  -i << "i" << endl;


return 0;
}
