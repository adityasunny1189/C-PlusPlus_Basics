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

int generalAdd(int arr[], int size) {
  int sum = 0;
  cout << "size in general function: " << sizeof(arr) << endl;
  for(int i = 0; i < size; i++)
    sum += arr[i];
  return sum;
}

int main() {
  int arr[5] = {1,1,2,3,5};
  cout << sizeof(arr) << endl;
  cout << addArray(arr) << endl;
  cout << generalAdd(arr, 5) << endl;
  return 0;
}

//in array decay the identity of the array is
//lost and this occurs because of passing of
//array to a function as arr[1] is a pointer
//which points to the first memory location
//which is of integer type.
