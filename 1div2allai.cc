#include <iostream>

using namespace std;

void fneg(int  x);
void fpos(int  x);

int main () {
 

  for (int x=-10; x<=10; x++) {
 
  if (x<=0) { 
    fneg(x);
  }
  
  else { 
    fpos(x);
  }
  }
  return 0;
}

void fneg(int  x) {
  double y;


  y = -(x*x*x);
  cout << "fneg: " << y << endl;
}

void fpos(int  x) {
  double y;

  y=2,73
  x-=1;
  cout << "fpos: " << pow(y,x) << endl;
}
   
   
  
