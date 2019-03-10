#ifndef PILASTRI_H
#define PILASTRI_H


enum retval{FAIL,OK};
struct nod;
typedef nod* stack;

struct nod{
  char parole[50];
  stack next;
};
    
void init(stack& s);
retval push(stack& s,char frase[]);
retval pop(stack& s);
retval top(stack& s,char frase[]);
bool empty(stack& s);
bool dealloc(stack& s);
void print(stack& s);

#endif

