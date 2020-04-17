#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int size, sum;
    cin >> size >> sum;
    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    for(int i = 0; i < size; i++) {
        int start = i + 1;
        int end = size - 1;
        while(start < end) {
            if(arr[i] + arr[start] + arr[end] == sum) {
                cout << arr[i] << " " << arr[start] << " " << arr[end] << endl;
                start++;
                end--;
            }
            else {
                end--;
            }
        }
    }
}