#include <iostream>


using namespace std;
//funzione secondo grado nei reali.


int main() 

{
  int dim=3,x,n,pos;  char sino;
  int v[dim];
 
  cout << "quanti elementi ha il vettore? " << endl;
  cin >> n;
  cout << "scrivi gli elementi" << endl;

  for (int i=0; i<n; i++) {
       cin >> v[i]; }

  cout << "vuoi aggiungere un elemento? s/n" << endl;
  cin >> sino;
  
  if (sino=='s'){
    cout << "scrivi l'elemento da inserire" << endl;
    cin >> x;
    cout << "scrivi la posizione in cui inserirlo" << endl;
    cin >> pos;

    dim+=1; n+=1; 
   
    for (int i=n-1; i>(pos-1) ; i--){
         v[i]= v[i-1]; 
    }
   
    v[pos-1]=x;
   
    cout << "Il vettore adesso e': " << endl;

    for (int i=0; i<n; i++) {
        cout << v[i] << "     "; }
    
  }    
  
  cout << endl;

  return 0;
}



  

 
