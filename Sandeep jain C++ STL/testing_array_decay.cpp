#include<bits/stdc++.h>
using namespace std;

int addArray(int arr[]) {
  int sum = 0;
  int len = sizeof(*arr)/sizeof(int);
  cout << len << endl;
  for(int i = 0; i < len; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int arr[5] = {1,1,2,3,5};
  cout << sizeof(arr) << endl;
  cout << addArray(arr) << endl;
  return 0;
}
