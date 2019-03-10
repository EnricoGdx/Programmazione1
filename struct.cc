using namespace std;
#include<iostream>
#include<cstdlib>

const int maxdim= 100;

struct indirizzo{
  int cap;
  char via[];
  int nciv;
  char citta[];
};

struct persona{
   char nome [];
   char cognome [];
   int nmatr;
   indirizzo* residenza;
};


struct gruppo{
   int npers;
   persona* nomi[];
   persona* cognomi[];
};

void leggiindirizzo(indirizzo& res);
void leggivia(char v[]);
void leggicitta(char v[]);
void legginome(char v[]);
void leggicognome(char v[]);
void leggipersona(persona& p);
void stampapercognome(gruppo& g);
void stampapernome(gruppo& g);
void stampapersone(persona* p[]);
void stampapersona(persona* p);
void stampaindirizzo(indirizzo* residenza);
void cercapernome(persona* p[],int npers);
void cercapercognome(persona* p[],int npers);
void inseriscipersona(gruppo& g,persona& p);
void ordinapernome(persona* p[],int npers);
void ordinapercognome(persona* p[],int npers);
void init(gruppo &g);

int main(){
   char nomee[maxdim];
   gruppo g;persona p;
   init(g);
   char risp;
   do {
       cout << "Cosa si intende fare?\n  n|stampapernome\n c|stampa per cognome\n o|cerca per nome\n s|cerca per cognome\n i|inserisci persona\n e|esci\n";
       cin >> risp;
       
       switch(risp) {
                   case 'n': stampapernome(g); break;
                   case 'c': stampapercognome(g); break;
                   //case 'o': leggipersona(p);cercapernome(g,p); break;
                   //case 's': leggipersona(p);cercapercognome(p,g.npers); break;
                   case 'i': leggipersona(p);inseriscipersona(g,p); break;
                   case 'e': exit(0);
                   default : cout << "Scelta non capita" << endl;
       }
   while (risp!='e');
 return 0;
}

void leggiindirizzo(indirizzo& res){
   
    cout << "cap?  ";
    cin >> res.cap;
    leggivia(res.via);
    cout << "numero civico?   ";
    cin >> res.nciv;
    leggicitta(res.citta);
}







void leggipersona(persona& p){

   legginome(p.nome);
   cout <<"cognome?   ";
   cin >> p.cognome;
   leggicognome(p.cognome);
   leggiindirizzo(p.residenza);
}


void leggivia(char v[]){
    cout << "via?  ";
    cin >> v;
}
void leggicitta(char v[]){
    cout << "citta'?    ";
    cin >> v;
}
void legginome(char v[]){
   cout << "nome?   ";
   cin >> v;
}
void leggicognome(char v[]){
   cout <<"cognome?   ";
   cin >> v;
}




void stampapercognome(gruppo& g){int c;}
void stampapernome(gruppo& g){

   stampapersone(g.nomi,g.npers);
}



void stampapersone(persona* p[]){

     for (int i=0; i<g.npers; i++) {
          stampapersona(*p[i]);}
}




void stampapersona(persona* p){

   cout << " nome :  " << p.nome << endl;
   cout << " cognome  :     " << p.cognome << endl;
   cout << " numero matricola :   " << p.nmatr << endl;
   stampaindirizzo(p.residenza);
}





void stampaindirizzo(indirizzo* residenza){
   cout << " cap :   " << residenza.cap << endl;
   cout << " via :   " << residenza.via << endl;
   cout << " ncivico :    " << residenza.nciv << endl;
   cout << "citta' :  " << residenza.citta << endl;
}





void cercapernome(persona* p[],int npers){int c;}
void cercapercognome(persona* p[],int npers){int c;}
void inseriscipersona(gruppo& g,persona& p){

    persona* tmp=new(persona);
    tmp=p;
    g.nomi[npers]=tmp;
    g.cognomi[npers]=tmp;
    g.npers++;
    //ordinapernome(g.nome,g.npers);
    //ordinapercognome(g.cognome,g.npers);
}

 





void ordinapernome(persona* p[],int npers){int c;}
void ordinapercognome(persona* p[],int npers){int c;}
void init(gruppo &g){
   g.npers=0;
}

