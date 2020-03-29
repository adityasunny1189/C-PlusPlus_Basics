#include<iostream>
using namespace std;
int partition(int input[], int start, int end) {
    int count = 0;
    int no = input[start];
    for(int i = start + 1; i <= end; i++) {
        if(input[i] <= no) {
            count++;
        }
    }
    int index = start + count;
    input[start] = input[index];
    input[index] = no;
    while(start < index && end > index) {
        if(input[start] < no) {
            start++;
        }
        else if(input[end] > no) {
            end--;
        }
        else {
            int temp = input[start];
            input[start] = input[end];
            input[end] = temp;
        }
    }
    return index;
}

void qs(int input[], int start, int end) {
    if(start >= end) {
        return;
    }
    else {
        int pos = partition(input, start, end);
        qs(input, start, pos - 1);
        qs(input, pos + 1, end);
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
	qs(arr, 0, size - 1);
	for(int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
