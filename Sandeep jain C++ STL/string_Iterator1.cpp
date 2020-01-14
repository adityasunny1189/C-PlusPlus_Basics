#include<iostream>
#include<string>
using namespace std;
int main() {
  string str;
  cout << "Enter string: ";
  cin >> str;
  string::iterator i;
  for(i = str.begin(); i != str.end(); i++) {
    cout << *i << endl;
  }
  return 0;
}
