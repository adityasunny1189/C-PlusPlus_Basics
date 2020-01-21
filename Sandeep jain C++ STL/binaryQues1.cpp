#include<bits/stdc++.h>
using namespace std;
int main() {
  int n = 12;
  int a;
  while(n != 1) {
    a = n % 2;
    n = n / 2;
    cout << a;
  }
  cout << a;
  cout << endl;
  return 0;
}
