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
            int count;
            int countS = 1;
            int countE = 1;
            int x = start + 1;
            if(arr[start] != arr[end]) {
                while(arr[x] == arr[start]) {
                    countS++;
                    x++;
                }
                x = end - 1;
                while(arr[x] == arr[end]) {
                    countE++;
                    x--;
                }
            } else {
               while(arr[x] == arr[start]) {
                    countS++;
                    x++;
                } 
            }
            
            count = (countS * countE);
            for(int h = 0; h < count; h++) {
                cout << arr[start] << " " << arr[end] << endl;
            }   
            start += (countS);
            end -= (countE);
        }
        else if(arr[start] + arr[end] > sum) {
            end--;
        }
        else {
            start++;
        }
    }
}