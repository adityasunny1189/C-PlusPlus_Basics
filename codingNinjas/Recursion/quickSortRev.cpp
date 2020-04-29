//Objective:-
//1.We have to sort the given array of element
//  Using quick sort Algorithm.
//2.step 1 is to select first element and then 
//  place it at its approprite place
//3.to palce the first element at its appropriate 
//  place we have to find the elements which are
//  smaller then it and then swap the element with
//  the element at that place.
//4.next step is to make an order of larger and 
//  smaller number, we can do it by using two 
//  pointers and then starting one from first and
//  another from last and then swaping the smaller
//  and larger number than than particular number
//5.Do this step recursively.
#include<iostream>
using namespace std;
void print(int *arr) {
    for(int i = 0; i < 10; i++) {
        cout << arr + i << " ";
    }
    cout << endl;
}
int partition(int *arr, int start, int end) {
    int ele = arr[0];
    
}
void qs(int *arr, int start, int end) {
    while(start < end) {
        int part = partition(arr, start, end);
        qs(arr, start, part);
        qs(arr, part, end);
    }
}
int main() {
    int *arr = new int[10];
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    print(arr);
    qs(arr, 0, 10);
    print(arr);
} 