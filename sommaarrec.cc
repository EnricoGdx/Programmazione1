#include<iostream>
using namespace std;

void somma(int c[],int d[], int a[]);
void csomma(int c[], int d[], int a[],int& b);

int main(){
  int c[3]={2,3,4,}, d[3]={1,2,3}, a[3];
  somma(c,d,a);
  for(int i=0;i<3;i++){
    cout << a[i] << "   ";}
  cout << endl;
  return 0;
}

void somma(int c[], int d[], int a[]){
  int b=0;
  csomma(c,d,a,b);
}

void csomma(int c[], int d[], int a[],int & b){
  a[b]=c[b]+d[b];
  b++;
  if(b<3) csomma(c,d,a,b);
}
