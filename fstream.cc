using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cctype>

int main (int argc, char * argv[])
{
  const float euro=2.0;

  fstream myin,myout;
  int value; char c;
  float liravalue;

  if (argc!=3) {
     cerr << "Usage : ./a.out <sourcefile> <targetfile>\n";
     exit(0);
  }

  myin.open(argv[1],ios::in);
  if (myin.fail()) {
    cerr << "Il file " << argv[1] << " non esiste\n";
    exit(0);
  }

  myout.open(argv[2],ios::out);

  myin >> value;
  while(myin.get(c)) {

if (isdigit(c)){
    liravalue=euro*value;
    myout << value << "" << fixed << setw(8) << setprecision(0) << liravalue << endl;
    myin>> value;}
   }

  myin.close();
  myout.close();
  return 0;
}
