#include"pilastri.h"
#include<iostream>
#include<cstring>
using namespace std;

void init(stack& s){
  s=NULL;
}

retval push(stack& s,char frase[]){
  retval e=FAIL;
  stack tmp=new (nothrow) nod;  
  if(tmp!=NULL){
    e=OK;
    strcpy(tmp->parole,frase);
    tmp->next=s;
    s=tmp;
  }
return e;
}
  
retval pop(stack& s){
  retval e=FAIL;
  if(!empty(s)){
    stack tmp=s;
    s=s->next;
    delete tmp;
    e=OK;
  }
 return e;
}

retval top(stack& s,char frase[]){
 retval e=FAIL;
 if(!empty(s)) {
   e=OK; 
   strcpy(frase,s->parole);
 }
 return e;
}
  
bool empty(stack& s){
 bool v=false;
 if(s==NULL) v=true;
 return v;
}

bool dealloc(stack& s){
 bool v=false;
 if(!empty(s)){
    while(s!=NULL) pop(s);
    v=true;
 }
 return v;
}

void print(stack& s){
  stack tmp=s;
  if(!empty(s)){
    while(tmp!=NULL) {
         cout << " " << tmp->parole << endl;
         tmp=tmp->next;
    }
  }
  else cout <<" Nessuna parola!\n";
}

 

