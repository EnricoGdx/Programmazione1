using namespace std;
#include<iostream>


int* leggiv(int &n);
void lsearc(int v[], int &pos, const int&x,int & i);
void lsearch(int v[], const int &n, int &pos);
void rimx(int v[],int& n);
void stampa(int v[],const int &n);
void swap(int& a, int& b);
void bubblesort(int v[], const int &n);
void bubblesor(int v[], const int& n,int& i, int& j);
void merges(int v[], int n);
void merge(int v[],int c[],int p,int u);   
 
int main()
{
 int *v,n,pos=0;

 v=leggiv(n);
 lsearch(v,n,pos);
 cout << "Il numero cercato e' nella posizione  " << ++pos << endl;
 merges(v,n);
 stampa(v,n);
 bubblesort(v,n);
 stampa(v,n);
 rimx(v,n);
 stampa(v,n);
 delete [] v;
}

int* leggiv(int& n){

  cout << "numero di elementi?  ";
  cin >> n;
  int *v=new int[n];
  for(int i=0;i<n;i++) {
     cout << "elemento " << i+1 << "?   ";
     cin >> v[i];}
   return v;
}

void lsearch(int *v, const int &n, int &pos){
 int x,i=n;
 
 cout << "quale numero si vuole cercare? ";
 cin >> x;
 lsearc(v,pos,x,i);
}

void lsearc(int v[], int &pos, const int&x, int& i){

  i--;
  if(v[i]==x) pos=i;
  else if(i>=0){
      lsearc(v,pos,x,i);}
}

void rimx(int v[],  int& n){

  int x,c=0;
  
  cout << "Numero da togliere? ";
  cin >> x;

  if (v[n-1]==x) { c++;}
  for (int i=n-2;i>=0;i--) {
    if (v[i]==x) {
       c++;
       for (int j=i;j<n-1;j++){ 
           v[j]=v[j+1];}
    }
  }
  for(;c>0;c--) n--;
}



void stampa(int *v, const int& n) {
  cout << "IL vettore adesso e':  " << endl;
  for(int i=0; i<n; i++) cout << "v di " << i << "   " << v[i] << endl;
}

void bubblesort(int *v, const int& n){
  cout << "ordinando.." << endl;
  int i=n-1,j=0;
  bubblesor(v,n,i,j);
}


void bubblesor(int *v, const int& n,int& i, int& j) {

 bool ve=true;
 if(j<n-1) {
        if (v[j]>v[j+1]) {swap(v[j],v[j+1]); ve=false;}j++;
        bubblesor(v,n,i,j);}
 if(i>0 && ve==false){i--;j=0; bubblesor(v,n,i,j);}
}

void swap(int& a, int& b) {
  int temp=a;
  a=b;
  b=temp;
}

void merges(int *v, int n){ 
   cout << "merging.... " << endl;
   int c[n]; 
   merge(v,c,0,n-1);
}

void merge(int v[],int c[], int p, int u){ 
 if(p<u){
    int pivot=(p+u)/2;
    merge(v,c,p,pivot);
    merge(v,c,pivot+1,u); 
    for (int i=p,j=pivot+1,k=p;k<=u;k++){
      if(j==(u+1) || (i<=pivot && v[i] < v[j])){
        c[k]=v[i];
        i++;
      }
      else {
        c[k]=v[j];
        j++;    
      }
    }
    for (int i=0;i<=u;i++) v[i]=c[i];

 }
     
}

