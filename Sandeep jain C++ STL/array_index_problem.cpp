#include<bits/stdc++.h>
using namespace std;
void change(int arr[], int size) {
    int j = 0;
    for(int i = 0; j < size; i++) {
        j = i + 2;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[i+2] = temp;
    }
}

int main() {
  int arr[5] = {1,2,3,4,5};
  for(int i = 0; i < 5; i++)
    cout << arr[i] << " ";
  cout << endl;
  change(arr, 5);
  for(int i = 0; i < 5; i++)
    cout << arr[i] << " ";
  return 0;
}
