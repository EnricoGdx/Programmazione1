#ifndef TREE_H
#define TREE_H
  
using namespace std;

  enum retval {FAIL,OK};

  struct nodo;

  typedef nodo* tree;

  struct nodo{
        int value;
        tree left;
        tree right;};

  void init(tree &t);
  retval insert(tree &t, int x);
  tree search(tree &t,int n);
  void print(tree& t);
  int max(tree& t);
  void dealloc(tree& t);
  bool empty(tree& t);
  void check(tree& t);

#endif
