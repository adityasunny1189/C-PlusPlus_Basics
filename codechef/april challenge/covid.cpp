#include<iostream>
using namespace std;
bool socialDistance(int arr[], int n) {
	int first;
	int second;
	for(int j = 0; j < n; j++) {
		if(arr[j] != 0) {
			first = j;
			for(int k = j + 1; k < n; k++) {
				if(arr[k] != 0) {
					second = k;
					if(second - first < 6) {
						return false;
					}
				}
			}
		}
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		int ans = socialDistance(arr, n);
		if(ans) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
