#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int largest, secondLargest;
    largest = secondLargest = -2147483648;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == largest) {
        cout << "-2147483648" << endl;
    }
    else {
        cout << secondLargest << endl;
    }

}
