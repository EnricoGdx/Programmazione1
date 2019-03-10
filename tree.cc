using namespace std;
#include<iostream>
#include "tree.h"

  void init(tree &t){
     t=NULL;
  }

  retval insert(tree& t, int x){
     retval e;
     if(empty(t)){
        t=new (nothrow) nodo;
        if (t==NULL) e=FAIL;
        else{
           e=OK;
           t->value=x;
           t->left=NULL;
           t->right=NULL;
        }
     }
     else if(x> t->value){
       e=  insert(t->right,x);}
     else if(x<=t->value){
       e=  insert(t->left,x);}
     return e;
  }

  void print(tree& t){
  
  if(!empty(t)){
    print(t->right);
    cout << t->value << endl;
    print(t->left);}
  }

  int max(tree& t){
  if(!empty(t->right)){ 
     max(t->right);}
  else if(!empty(t)) return t->value;
  }

  tree search( tree& t,int n){
    
  tree res;
  if(empty(t)) res=NULL;
  else if(t->value==n) res=t;
  else if(n>t->value) res=(search(t->right,n));
  else if(n<t->value) res=(search(t->left,n));
  return res;
  }

  bool empty(tree& t){
  return (t==NULL);
  }

  void dealloc(tree& t){
  if(!empty(t)){ 
    if(!empty(t->right)) dealloc(t->right);
    if(!empty(t->left)) dealloc(t->left);
    delete t;
  }
   init(t);
  }

  void check(tree& t){
//   if(!empty(t)){ 
  //  if(!empty(t->right)) check(t->right);
    //if(!empty(t->left)) check(t->left);
    //if(t!=NULL) delete t;
   }
         
 

