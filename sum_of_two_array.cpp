#include<iostream>
using namespace std;
int main() {
	int arr1[] = {8, 6, 7, 3};
	int arr2[] = {4, 8, 5, 2};
	int i = 3, j = 3, k = 4;
	int rem = 0;
	int out[5];
	for(; i >= 0 && j >= 0; i--, j--) {
		int ele = arr1[i] + arr2[j] + rem;
		if(ele < 10) {
			out[k--] = ele;
			rem = 0;
		}
		else {
			out[k--] = ele - 10;
			rem = 1;
		}
	}
	for(int i = 0; i <= 4; i++) {
		cout << out[i] << " ";
	}
	cout << endl;
}
