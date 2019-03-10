#include <iostream>
#include <cstdlib>

using namespace std;

int max(int &a, int &b, int &c);

int main () 
{

  int a,b,c,d,e,f;
  char i;

cout<<"Fai il conto alla rovescia a partire dal 5" << endl;

 srand(time(NULL));
a=rand()%6+1;
 cin >> i;
 srand(time(NULL));
b=rand()%6+1;
 cin >> i;
 srand(time(NULL));
c=rand()%6+1;
 cin >> i;
 srand(time(NULL));
d=rand()%6+1;
 cin >> i;
 srand(time(NULL));
e=rand( )%6+1;
 cin >> i;
 srand(time(NULL));
f=rand()%6+1;

cout<<"Lancio dei dadi:" << endl;

cout << "i tuoi dadi danno" << endl << a << "  " << b << "   " << c << endl;
cout << "quelli del tuo avversario" << endl << d << "  " << e << "   " << f << endl;

 for (int i=0; i<3; i++){

    if(max(a,b,c)>=max(d,e,f)) cout << "La tua difesa ha vinto!!!" << endl;
    else cout << "La tua difesa ha perso!!!" << endl;
 }


}
   
   
int max(int &a, int &b, int &c){
int mas;
  

  if (a>=b && a>=c) { mas=a; a=0;}
  else if (b>=a && b>=c) { mas=b; b=0;}
  else {mas=c; c=0;}

  cout << "difesa= " << mas << endl;

return mas;
}
  
    
