#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
  vector<int> v;
  int n;
  cout << "Enter size of array: ";
  cin >> n;


  for(int i = 0; i < n; i++) {
    int ele;
    cout << "Enter ele: ";
    cin >> ele;
    v.push_back(ele);
  }
  bool found = 0;
  int num;
  cout << "Enter no to search: ";
  cin >> num;
  int low = 0, mid, high = n - 1;
  for(int i = 0; i < n; i++) {
    mid = (low + high)/2;
    if(v[mid] == num) {
      found = 1;
      cout << "Element Found" << endl;
      break;
    }
    else if(v[mid] > num)
      high = mid - 1;
    else
      low = mid + 1;
  }
  if(found == 0) {
    cout << "Element not present" << endl;
  }
  return 0;
}
