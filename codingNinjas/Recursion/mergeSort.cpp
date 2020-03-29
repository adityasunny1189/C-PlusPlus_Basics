#include<iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end) {
	int size = end - start;
	int A[size];
	for(int i = 0; (i + start) < end; i++) {
		A[i] = arr[start + i];
	}
	int p1 = start;
	int p2 = mid;
	while(p1 < mid && p2 < end) {
		if(A[p1] >= A[p2]) {
			arr[start++] = A[p2++];
		} else {
			arr[start++] = A[p1++];
		}
	}
	while(p1 < mid) {
		arr[start++] = A[p1++];
	}
	while(p2 < end) {
		arr[start++] = A[p2++];
	}
}

void mergeSort(int arr[], int start, int end) {
	if(start >= end) {
		return;
	}
	else {
		int mid = (start + end) / 2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, start, mid + 1, end);
	}
}

int main() {
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "Array after sorting is" << endl;
	mergeSort(arr, 0, size);
	for(int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
