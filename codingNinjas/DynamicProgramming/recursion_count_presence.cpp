#include<iostream>
using namespace std;
int findIndex(int *arr, int num, int n) {
	
}
int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int num;
	cin >> num;
	int ans = findIndex(arr, num, n);
	cout << ans << endl;
}