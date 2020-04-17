#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int size, sum;
    cin >> size >> sum;
    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int start = 0;
    int end = size - 1;
    while(start < end) {
        if(arr[start] + arr[end] == sum) {
            cout << arr[start] << " " << arr[end] << endl;
            start++;
            end--;
        }
        else {
            end--;
        }
    }
}