#include<bits/stdc++.h>
using namespace std;
int *fun() {
  int x = 10;
  int *ptr = &x;
  return ptr;
}
int main() {
  cout << *fun() << endl;
  return 0;
}
