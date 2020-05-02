#include<iostream>
using namespace std;
int getMin(int *arr, int n) {
    int countMin = 1;
    int count = 1;
    int i = 1;
    for(; arr[i] - arr[i - 1] <= 2 && i < n; i++) {
        count++;
    }
    int rem = n - i;
    if(rem)
        countMin = count > rem ? rem : count;
    else 
        countMin = count;
    count = 1;
    for(; i < n; i++) {
        if(arr[i] - arr[i - 1] <= 2) {
            count++;
            continue;
        }
        if(count != 1)
        if(count < countMin) {
            countMin = count;
            count = 1;
        }
    }
    return countMin;
}
int getMax(int *arr, int n, int minNo) {
    int countMax = minNo;
    int count = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i - 1] <= 2) {
            count++;
        }
        else {
            if(countMax <= count) {
                countMax = count;
                count = 1;
            }
        }
    }
    if(countMax <= count) {
        countMax = count;
        count = 1;
    }
    return countMax;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int countMin = getMin(arr, n);
        int countMax = getMax(arr, n, countMin);
        cout << countMin << " " << countMax << endl;
    }
}