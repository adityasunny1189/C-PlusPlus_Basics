#include<bits/stdc++.h>
using namespace std;
int main() {
  char str[100];
  cout << "Enter string: ";
  cin >> str;
  for(int i = 0; i < strlen(str); i++) {
    if(str[i] == "a") {
      cout << " ";
    }
    else if(str[i] ){
      char upper = str[i] - 'a' + 'A';
      cout << upper;
    }
  }
  cout << endl;
  return 0;
}
