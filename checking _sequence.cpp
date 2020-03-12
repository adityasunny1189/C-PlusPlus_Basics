#include<iostream>
using namespace std;
bool checkSequence(int arr[], int size) {
	int sum = arr[0], small;
	int big = small = arr[0];
	for(int i = 1; i < size; i++) {
		int num = arr[i];
		sum += arr[i];
		if(num > big)
			big = num;
		if(small > num)
			small = num;
	}
	int propSum = size * (big + small) / 2;
	if(sum == propSum) {
		return true;
	}
	return false;
}
int main() {
	int size;
	cin >> size;
	int arr[1000];
	for(int i = 0; i < size; i++)
		cin >> arr[i];
	cout << checkSequence(arr, size) << endl;
}
