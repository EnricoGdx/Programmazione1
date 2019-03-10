using namespace std;
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>

int main () 
{
  char buffer[80];
  cin >> buffer;
  char* p=strchr(buffer,',');
   cout << p-buffer << buffer[p-buffer] << endl;
  cout << buffer[p-buffer+1] << endl;
  cout << buffer[0] << endl;
  cout <<p << buffer[p-buffer] << endl;
  return 0;
}

