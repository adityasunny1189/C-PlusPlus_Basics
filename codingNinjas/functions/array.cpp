#include<iostream>
using namespace std;
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
void reverseArray(int *arr, int size) {
	if(size == 0 || size == 1) {
		return;
	}
	swap(arr[0], arr[size - 1]);
	reverseArray(arr + 1, size - 2);
}
int main() {
	int *arr = new int[10];
	for(int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}
	cout << "Current Array: " << endl;
	for(int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	reverseArray(arr, 10);
	cout << "Reversed Array: " << endl;
	for(int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}