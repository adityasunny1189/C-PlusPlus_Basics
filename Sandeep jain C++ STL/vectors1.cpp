#include<vector>
#include<iostream>
using namespace std;

int main() {
  int n = 3;
  vector<int> v(n,5);
  for(auto x: v)
    cout << x << " ";
  return 0;
}
