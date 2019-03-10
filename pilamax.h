#ifndef PILAMAX_H
#define PILAMAX_H
  
using namespace std;

  enum retval {FAIL,OK};

  struct nodo;

  typedef nodo* stack;

  struct nodo{
        int value;
        stack next;};

  void init(stack &s);
  retval push(stack &s, int x);
  retval pop(stack &s);
  retval top(stack& s , int& n);
  void print(stack& s);
  retval max(stack& s, int& n);
  int time_number(stack& s,int n);
  void dealloc(stack& s);
  void rev(stack& s);
  static bool empty(stack& s);

#endif
