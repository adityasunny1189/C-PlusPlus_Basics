#include<iostream>
using namespace std;
bool checkSorted(int * arr, int size) {
	if(size == 0 || size == 1)
		return true;
	if(arr[0] > arr[1])
		return false;
	bool smallOutput = checkSorted(arr + 1, size - 1);
	return smallOutput;
}
int main() {
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i = 0; i < size; i++)
		cin >> arr[i];
	cout << checkSorted(arr, size) << endl;
}
