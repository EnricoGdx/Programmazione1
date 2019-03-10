#include <iostream>
#include <cmath>


using namespace std;

void fneg(double x);
void fpos(double x);

int main () {
 

  for (double  x=-10; x<=10; x++) {
 
    if (x<=0) { 
        fneg(x);
     }
  
    else { 
          fpos(x);
     }
  }
  return 0;
}

void fneg(double x) {
  double y;


  y = -(x*x*x);
  cout << "fneg: " << y << endl;
}

void fpos(double x) {
  double y;

  y=2,73;
  x-=1;
  cout << "fpos: " << pow(y,x) << endl;
}
   
   
  
