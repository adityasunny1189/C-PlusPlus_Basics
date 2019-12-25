#include<iostream>
using namespace std;
int fun(int x, int y = 0, int z = 0) {
  return (x + y + z);
}
int main() {
  cout << fun(10,20,30);
  return 0;
}
