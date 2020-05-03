#include<bits/stdc++.h>
using namespace std;
int IsolationCenter(int *arr, int n, int center) {
	sort(arr, arr + n);
	int ans = 0;
	for(int i = 0; i < n; i++) {
		int cur = arr[i];
		int count = 1;
		if(cur != 0)
		for(int j = i + 1; arr[j] == cur; j++) {
			count++;
			arr[j] = 0;
		}
		//cout << "count: " << count << endl; 
		if(count - center > 0) {
			ans += count - center;
		}
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, q;
		cin >> n >> q;
		int *arr = new int[n];
		for(int i = 0; i < n; i++) {
			char ch;
			cin >> ch;
			arr[i] = ch - '0';
		}
		for(int j = 0; j < q; j++) {
			int c;
			cin >> c;
			cout << IsolationCenter(arr, n, c) << endl;
		}
	}
}
