#include<iostream>
#include<cstring>

using namespace std;

int nextint ();
int main()

{
  int m= nextint(), n=nextint();
  cout << m << " + " << n << " = " <<  m+n << endl;
  return 0;
}

int nextint() {
   
   char ch;    //character 
   int n;

   while (cin.get(ch)) 
       if(ch >= '0' && ch <= '9') {
          cin.putback(ch);
          cin>>n;
          break;
   }
   return n;
}
