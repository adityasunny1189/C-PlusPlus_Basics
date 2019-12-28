#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
  vector<int>v;
  cout << "Enter size of array: ";
  int size;
  cin >> size;
  for(int i = 0; i < size; i++) {
    int no;
    cout << "Enter " << i << "th element: ";
    cin >> no;
    v.push_back(no);
  }

  // for(int i = 0; i < size; i++) {
  //   cout << v[i] << " ";
  // }

  int ele;
  cout << "Enter element to search: ";
  cin >> ele;
  bool found = 0;
  for(int i = 0; i < size; i++) {
    if(v[i] == ele) {
      found = 1;
      cout << "Element found at position: " << i << endl;
      break;
    }
  }
  if(found == 0) {
    cout << "Element not present" << endl;
  }

  return 0;
}
