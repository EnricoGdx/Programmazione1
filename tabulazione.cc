using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <stdio.h>

int main (int argc, char * argv[]) 
{
  fstream myin,myout;
  char c;
  
  if (argc!=3) {
    cout << "Usage: ./a.out <sourcefile> <targetfile>\n";
    exit(0);
  }
  
  myin.open(argv[1],ios::in);
  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(0);
  }

  myout.open(argv[2],ios::out);
  
  while(myin.get(c)){
    if(iscntrl(c)&& c!='\n') c='\n';
    myout.put(c);
  } 
 
  remove(argv[1]);
  rename(argv[2],argv[1]);

  myin.close();
  myout.close();
  return 0;
}


