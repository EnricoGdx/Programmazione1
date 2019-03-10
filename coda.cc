using namespace std;
#include<iostream>
#include "coda.h"

  void init(queue &q){
     q.head=NULL;
  }
  retval enqueue(queue &q, int x){
     retval e=FAIL;
     nods tmp=new (nothrow)  nodo;
     if(tmp!=NULL){
         e = OK;
         tmp->value=x;
         tmp->next=NULL;
         if(empty(q)) q.head=tmp;
         else q.tail->next=tmp;
         q.tail=tmp;
     }
     return e;
  }


  retval dequeue(queue& q){
  retval e=FAIL;
  nods tmp;
  if (!(empty(q))){
      tmp=q.head;
      e=OK;
      q.head=q.head->next;
      delete tmp;}

  return e;  
  
}


  retval first(queue& q , int& n){
  retval e=FAIL;
  if(!(empty(q))) {
    e=OK;
    n=q.head->value;}
  }

  void print(queue& q){
  
  if(!empty(q)){
      nods tmp=q.head;
      do{
       cout << tmp->value << endl;
       tmp=tmp->next;
      } while(tmp!=NULL);
  }
  }

  retval max(queue& q, int& n){

  retval e=FAIL;
  if(!empty(q)){ e=OK;
       nods tmp=q.head; n=tmp->value;
      while(tmp!=NULL){
        if(tmp->value > n) n=tmp->value;
        tmp=tmp->next;
      }
   }
         
   return e;  
   }

  int time_number(queue& q,int n){
  nods tmp=q.head;int c=0; 
  if(!empty(q)){
      while(tmp!=NULL){
        if(tmp->value ==n) c++;
        tmp=tmp->next;
      }
  }
         
  return c; 
  
  }

  static bool empty(queue& q){
  bool e= false;
  if(q.head==NULL) e=true;
  return e;
  }

  void dealloc(queue& q){
  if(!empty(q)) {
       while(q.head!=NULL) dequeue(q);}
  }
         
 

