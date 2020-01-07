#include<bits/stdc++.h>

using namespace std;

class clac {
private:
  int size = 5;
  int *arr = new int[size];
public:
  void read() {
    cout << "Enter array elements: " << endl;
    for(int i = 0; i < size; i++)
      cin >> arr[i];
  }
  void sum() {
    int add = 0;
    for(int i = 0; i < size; i++)
      add += arr[i];
    cout << add << endl;
  }
};

int main() {
  clac c1;
  c1.read();
  c1.sum();
  return 0;
}
