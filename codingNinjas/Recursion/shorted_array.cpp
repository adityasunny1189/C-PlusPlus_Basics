#include<iostream>
using namespace std;
bool checkSorted(int * arr, int size) {
	if(size == 0 || size == 1)
		return true;
	if(arr[size - 1] >= arr[size - 2])
		if(checkSorted(arr, size - 1))
			return true;
	return false;
}
int main() {
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i = 0; i < size; i++)
		cin >> arr[i];
	cout << checkSorted(arr, size) << endl;
}
