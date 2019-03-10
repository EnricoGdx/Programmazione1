#ifndef STACKDIN_H
#define STACKDIN_H

 struct stick{
   char testo[100];};

 enum retval{FAIL,OK};

 void init();
 retval push(char testo[]);
 retval pop();
 retval top(char testi[]);
 void print ();
 void dealloc();

#endif
 
