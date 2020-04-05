#include<iostream>
using namespace std;
void rotate(int arr[], int k, int size) {
	while(k--) {
		int temp = arr[size - 1];
		for(int i = size - 1; i >= 0; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}
int main() {
	int n, k, q;
	cin >> n >> k >> q;
	int *arr = new int[n];
	int *qur = new int[q];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for(int j = 0; j < q; j++) {
		cin >> qur[j];
	}
	rotate(arr, k, n);
	for(int i = 0; i < q; i++) {
		int index = qur[i];
		cout << arr[index] << endl;
	}
}
