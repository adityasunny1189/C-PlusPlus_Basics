#include<bits/stdc++.h>
bool canSplt(int arr[], int n) {
    long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    if(sum % 2 != 0) {
        return false;
    } 
    int *arr5 = new int[n];
    int *arr3 = new int[n];
    int k = 0;
    int l = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 5 == 0) {
            arr5[k++] = arr[i];
            arr[i] = 0;
        } else if(arr[i] % 3 == 0 && arr[i] % 5 != 0) {
            arr3[l++] = arr[i];
            arr[i] = 0;
        }
    }
    int newSum = 0;
    for(int i = 0; i < n; i++) {
        newSum += arr[i];
    }
    if(newSum % 2 == 0) {
        return true;
    } else {
        return false;
    }
}