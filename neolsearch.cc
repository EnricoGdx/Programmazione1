using namespace std;
#include<iostream>


void leggiv(int v[], int &n);
void lsearc(int v[], int &pos, const int&x,int & i);
void lsearch(int v[], const int &n, int &pos);
void rimx(int v[],int& n);
void stampa(int v[],const int &n);
void swap(int& a, int& b);
void bubblesort(int v[], const int &n);
void bubblesor(int v[], const int& n,int& i, int& j);
void merges(int v[], int& n);
void mergeso(int v[],int &n, int &left, int & right,int &n1, int &n2);
void merge(int v[],int a[],int b[], int n1, int n2);     
 
int main()
{
 int v[100],n,pos=0;

 leggiv(v,n);
 lsearch(v,n,pos);
 cout << "Il numero cercato e' nella posizione  " << ++pos << endl;
 merges(v,n);
 stampa(v,n);
 bubblesort(v,n);
 stampa(v,n);
 rimx(v,n);
 stampa(v,n);
}

void leggiv(int v[], int& n){

  cout << "numero di elementi?  ";
  cin >> n;
  for(int i=0;i<n;i++) {
     cout << "elemento " << i+1 << "?   ";
     cin >> v[i];}
}

void lsearch(int v[], const int &n, int &pos){
 int x,i=n;
 
 cout << "quale numero si vuole cercare? ";
 cin >> x;
 lsearc(v,pos,x,i);
}

void lsearc(int v[], int &pos, const int&x, int& i){

  i--;
  if(v[i]==x || i==0) pos=i;
  else {
      lsearc(v,pos,x,i);}
}

void rimx(int v[],  int& n){

  int x,c=0;
  
  cout << "Numero da togliere? ";
  cin >> x;

  if (v[n-1]==x) { c++;}
  for (int i=n-2;i>=0;i--) {
    if (v[i]==x) {
       for (int j=i;j<n-1;j++){ 
           v[j]=v[j+1];} c++;
    }
  }
  for(;c>0;c--) n--;
}


void stampa(int v[], const int& n) {
  cout << "IL vettore adesso e':  " << endl;
  for(int i=0; i<n; i++) cout << "v di " << i << "   " << v[i] << endl;
}

void bubblesort(int v[], const int& n){
  cout << "ordinando.." << endl;
  int i=n-1,j=0,c=0;
  bubblesor(v,n,i,j);
}


void bubblesor(int v[], const int& n,int& i, int& j) {

 if(j<n-1) {
        if (v[j]>v[j+1]) {swap(v[j],v[j+1]);}j++;
        bubblesor(v,n,i,j);}
 if(i>0 ){i--;j=0; bubblesor(v,n,i,j);}
}

void swap(int& a, int& b) {
  int temp=a;
  a=b;
  b=temp;
}

void merges(int v[], int& n){ cout << "merging.... " << endl;
   int right=n-1,left=0; int n1=0,n2=0;
   mergeso(v,n,left,right,n1,n2);
}

void merge(int v[],int a[],int b[], int n1, int n2){ 
   if(v[n1]>v[n2]) swap(v[n1],v[n2]);
}

void mergeso(int v[],int &n, int &left, int & right,int &n1, int &n2) {
  int pos;   
  pos=(right+left)/2; 
  if (right==left || right==left+1 || left==right+1) merge(v,v,v,left,right);
  else {
       if (right>pos) mergeso(v,n,pos,right,n1,n2);
       if(left<pos) mergeso(v,n,left,pos,n1,n2);};
}
