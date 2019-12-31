#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
  char source[100], toSearch[10];
  cout << "Enter the source string: ";
  cin >> source;
  cout << "Enter the string to search: ";
  cin >> toSearch;
  int count = 0;
  for(int i = 0; i < strlen(source); i++) {
    for(int j = 0; j < strlen(toSearch); j++) {
      if(source[j + i] != toSearch[j])
        break;
      else if(j == strlen(toSearch) - 1)
        count++;
    }
  }
  cout << count << endl;
  return 0;
}
