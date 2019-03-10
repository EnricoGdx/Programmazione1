using namespace std;
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>

const int maxdim=80;

int main(int argc,char* argv[]){
 fstream myin,myout;
 myin.open(argv[1],ios::in);

 if(argc!=4){
    cerr<< "Numero imput sbagliato!  " << endl;
    exit(0);}

 if(myin.fail()){
    cerr << "ERROR"<<endl;
    exit(0);}

 char riga[maxdim];

 int v=0;

 int n_righe= atoi(argv[2]);
 
 char** righe=new (nothrow) char*[n_righe];
 if(righe!=NULL){
    for(int i=0;i<n_righe;i++){
      myin.getline(riga,maxdim);
      switch(riga[0]){
         case 'a': case'e': case'i': case'o': case'u': case'A': case'U': case'I': case'O': case'E':  break;
         default:   righe[v]=new (nothrow)char[maxdim]; 
                    if(righe[v]!=NULL){
                     strcpy(righe[v],riga);
		     v++; 
		     break;
		    }
      }
    }
 }
 myin.close();
 myout.open(argv[3],ios::out);
 for(int i=v-1;i>=0;i--){
   myout << righe[i] << endl;}

 myout.close();
 for(int i=0;i<v;i++){
   delete [] righe[i];}
 
 delete [] righe;

 return 0;
}

      
