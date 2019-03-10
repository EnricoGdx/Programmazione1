#ifndef CODA_H
#define CODA_H
  
using namespace std;

  enum retval {FAIL,OK};

  struct nodo;

  typedef nodo* nods;

  struct nodo{
        int value;
        nods next;};

  struct queue{
        nods head;
        nods tail;};

  void init(queue &q);
  retval enqueue(queue &q, int x);
  retval dequeue(queue &q);
  retval first(queue& q , int& n);
  void print(queue& q);
  retval max(queue& q, int& n);
  int time_number(queue& q,int n);
  void dealloc(queue& q);
  static bool empty(queue& q);

#endif
