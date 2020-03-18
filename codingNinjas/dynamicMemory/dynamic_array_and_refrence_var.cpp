#include<iostream>
using namespace std;
void print(int* &arr, int size) {
	for(int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}
int main() {
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	print(arr, size);
	delete [] arr;
	print(arr, size);
}
