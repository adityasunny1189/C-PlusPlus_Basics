#include<iostream>
using namespace std;
int index(int arr[], int size, int x) {
	if(size == 0)
		return -1;
	if(arr[0] == x)
		return 0;
	int smallAns = index(arr + 1, size - 1, x);
	if(smallAns == -1) {
		return smallAns;
	}
	else {
		return smallAns + 1;
	}
}
int main() {
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int no;
	cin >> no;
	cout << index(arr, size, no) << endl;
}
