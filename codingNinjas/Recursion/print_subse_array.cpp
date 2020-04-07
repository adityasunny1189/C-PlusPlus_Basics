#include<iostream>
using namespace std;
void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void helper(int input[], int size1, int output[], int size2) {
    if(size1 == 0) {
        print(output, size2);
    }
    helper(input + 1, size1 - 1, output, size2);
    int newop[1000];
    int i;
    for(i = 0; i < size2; i++) {
        newop[i] = output[i];
    }
    newop[i] = input[0];
    helper(input + 1, size1 - 1, newop, size2 + 1);
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int output[1000];
    helper(input, size, output, 0);
}
