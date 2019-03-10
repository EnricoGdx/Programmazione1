#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>

 struct message{
  char testo[10000];};

 enum retval{FAIL,OK};


 void init();
 retval enqueue(message* m);
 retval dequeue();
 retval first(message*& m);
 void print();
 void dealloc();


#endif
 
