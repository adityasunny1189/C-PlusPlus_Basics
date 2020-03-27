#include<iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end) {
	int size1 = mid - start;
	int size2 = end - mid;
	int arr1[size1], arr2[size2];
	int j = 0, k = 0;
	for(int i = start; i < mid; i++) {
		arr1[j++] = arr[i];
	}
	for(int i = mid; i < end; i++) {
		arr2[k++] = arr[i];
	}
	int z = 0;
	int i, l;
	for(i = 0; i < size1; i++) {
		for(l = 0; l < size2; l++) {
			if(arr1[i] >= arr2[l]) {
				arr[z++] = arr2[l];
			}
			else if(arr1[i] < arr2[l]) {
				arr[z++] = arr1[i];
			}
		}
	}
	while(i < size1) {
		arr[z++] = arr1[i];
		i++;
	}
	while(l < size2) {
		arr[z++] = arr2[l];
		l++;
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
		merge(arr, start, mid, end);
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
