#include <iostream>


using namespace std;
void scambia(int &d,int &e,int &f);

int main() 
{
  int a,b,c;
  
  cout << "inserisci tre numeri da scambiare" << endl;
  cin >> a >> b >> c;

  scambia (a,b,c);
  cout << "adesso sono: " <<  endl << a << endl << b << endl << c << endl;
  return 0;
}

void scambia(int  &d, int &e , int &f) {
   
  int sba, scb, sac;
  sba=e;
  scb=f;
  sac=d;
  d=sba;
  e=scb;
  f=sac;
}
