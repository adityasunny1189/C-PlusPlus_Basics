#include<bits/stdc++.h>

using namespace std;

int main() {
  int size, min, pos;
  cout << "Enter array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter array elements: " << endl;
  for(int i = 0; i < size; i++)
    cin >> arr[i];
  cout << "Input array is: " << endl;
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
  cout << "Array after sorting is: " << endl;
  for(int i = 0; i < size - 1; i++) {
    min = arr[i];
    for(int j = i + 1; j < size; j++) {
      if(min > arr[j]) {
        min = arr[j];
        pos = j;
      }
    }
    int temp = arr[i];
    arr[i] = min;
    arr[pos] = temp;
    for(int i = 0; i < size; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
