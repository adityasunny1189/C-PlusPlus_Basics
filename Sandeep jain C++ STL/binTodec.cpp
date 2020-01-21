#include<bits/stdc++.h>
using namespace std;
int main() {
  int no = 1001;
  int add = 0;
  int rem, i = 0;
  while(no != 1) {
    rem = no % 10;
    no = no / 10;
    add += rem * pow(2, i);
    i++;
  }
  add += 1 * pow(2, i);
  cout << add << endl;
  return 0;
}
