#include <iostream>
#include <cmath>


using namespace std;

void fneg(double x);
void fpo(double x);

 


int main () {
 

  for (double  x=-10; x<=10; x++) {
 
    if (x<=0) { 
        fneg(x);
    }
    else { fpo(x);}
 
  } 
  return 0;
}

void fneg(double x) {
  double y;


  y = -(x*x*x);
  cout << "fneg: " << y << endl;
}

void fpo(double x) {
  float y=2.73;
  cout<< pow(y,x) << endl;}
   
  
