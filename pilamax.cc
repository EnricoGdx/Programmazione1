using namespace std;
#include<iostream>
#include "pilamax.h"

  void init(stack &s){
     s=NULL;
  }
  retval push(stack &s, int x){
     retval e=FAIL;
     stack tmp=new (nothrow)  nodo;
     if(tmp!=NULL){
         e = OK;
         tmp->value=x;
         tmp->next=s;
         s=tmp;}
     return e;
  }


  retval pop(stack &s){
  retval e=FAIL;
  stack tmp;
  if (!(empty(s))){
      tmp=s;
      e=OK;
      s=s->next;
      delete tmp;}

  return e;  
  
}

  void rev(stack& s){
  if(!empty(s)){
    rev(s->next);
    cout << " " << s->value << endl << endl;}
  }


  retval top(stack& s , int& n){
  retval e=FAIL;
  if(!(empty(s))) {
    e=OK;
    n=s->value;}
  }

  void print(stack& s){
  
  stack tmp=s;
  while(tmp!=NULL){ 
      cout <<   endl << " " <<tmp->value << endl;
            tmp=tmp->next;}
  
  }
  retval max(stack& s, int& n){

  stack tmp=s->next;
  retval e=FAIL;
  if(!empty(s)){
      tmp=s;
      e=OK;
      n=s->value;
      while(tmp!=NULL){
        if(tmp->value > n) n=tmp->value;
        tmp=tmp->next; }
   }
         
   return e;  
   }

  int time_number(stack& s,int n){
  stack tmp=s; int c=0;
  if(!empty(s)){
      while(tmp!=NULL){
        if(tmp->value ==n) c++;
        tmp=tmp->next;
      }
  }
         
  return c; 
  
  }

  static bool empty(stack& s){
  bool e= false;
  if(s==NULL) e=true;
  return e;
  }

  void dealloc(stack& s){
  if(!empty(s)) {
       while(s!=NULL) pop(s);}
  }
         
 

