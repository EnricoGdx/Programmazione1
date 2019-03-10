#include<iostream>
#include "queue.h"

using namespace std;

// SMALL VALUE ONLY FOR DIDACTIC PURPOSE
//static const int dim = 1000;
static const int dim = 10;
static int head, tail;
message* elem[dim];

static int next(int index) 
{
  return (index+1)%dim;
}

void init() 
{
  tail=head=0;
}

static bool emptyp() 
{
  return (tail==head);
}

static bool fullp()
{
  return (next(tail)==head);
}

retval enqueue (message* n) 
{ 
  retval res;
  if (fullp()) 
    res = FAIL;
  else {
    elem[tail] = n;
    tail = next(tail);
    res=OK;
  }
  return res;
}

retval first(message*& n) 
{ 
  retval res;
  if (emptyp()) 
    res = FAIL;
  else {
    n = elem[head];
    res=OK;
  }
  return res;
}

retval dequeue() 
{ 
  retval res;
  if (emptyp()) 
    res = FAIL;
  else {
    delete elem[head];
    head = next(head);
    res=OK; 
  }
  return res;
}

void print () 
{ 
  for(int i=head;i<tail;i++){
   cout << elem[i]->testo  << endl;}
}

void dealloc (){
  if(!emptyp()){
    while(head!=tail) dequeue();}
}

      
      
    
   

