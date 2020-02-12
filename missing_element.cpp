#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n - 1];
	for(int i = 0; i < n - 1; i++) {
		cin >> arr[i];
	}
	int total_sum = n * (n + 1) / 2;
	int sum = 0;
	for(int j = 0; j < n -1; j++) {
		sum += arr[j];
	}
	cout << total_sum << " " << sum << endl;
	int missing_no = total_sum - sum;
	cout << missing_no << endl;
}
