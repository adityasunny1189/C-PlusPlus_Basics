#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int secondLargestElement(int nums[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(nums[i] > nums[j]) {
                int ran = nums[i];
                nums[i] = nums[j];
                nums[j] = ran;
            }
        }
    }
    int asd = nums[size - 1];
    while(asd == nums[size - 1]) {
        size--;
    }
    ans = nums[size - 1];
    return ans;
}

int main() {
  int size;
  cout << "Enter size: ";
  cin >> size;
  int nums[size];
  cout << "Enter array elements: " << endl;
  for(int i = 0; i < size; i++)
    cin >> nums[i];
  cout << "Array content is: " << endl;
  for(int i = 0; i < size; i++)
    cout << nums[i] << " ";
  cout << endl;
  cout << "Array after sorting is: " << endl;
  for(int i = 0; i < size; i++) {
      for(int j = i + 1; j < size; j++) {
          if(nums[i] > nums[j]) {
              int ran = nums[i];
              nums[i] = nums[j];
              nums[j] = ran;
          }
      }
  }
  for(int i = 0; i < size; i++)
    cout << nums[i] << " ";
  cout << endl;
  cout << "Second largetst array element is: " << secondLargestElement(nums,size);
  cout << endl;
  return 0;
}
