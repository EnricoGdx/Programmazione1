#include<iostream>
#include<cstring>
#include"stackdin.h"

using namespace std;

static int indexe; static int dim=100; 
static stick* stack= new (nothrow) stick[dim];

 void init(){
   indexe=0;
 }

 static bool empty(){
  return(indexe==0);
 }

 retval push(char testi[]){

  retval e=FAIL;
  if(indexe<dim){
       e=OK;
       strcpy(stack[indexe].testo,testi);
       indexe++;
   }
  return e;
  }
        
 retval pop(){
  
   retval e=FAIL;
   if (!empty()){
     e=OK;
     indexe--;
   }
  return e;
 }

 retval top(char testi[]){

  retval e=FAIL;
  if(!empty()){
     e=OK;
     strcpy(testi,stack[indexe-1].testo);
  }
  return e;
 }

 void print(){
  
   for (int i=0;i<indexe;i++){
     cout << stack[i].testo << endl;
   }
 }

 void dealloc(){
   
   if(!empty()){
     delete stack;
     index=0; 
   }
  }

