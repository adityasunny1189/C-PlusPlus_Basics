#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int *arr, int n) {
	unordered_map<int, bool> ourmap;
	for(int i = 0; i < n; i++) {
		if(ourmap.count(arr[i]) > 0) {
			return arr[i];
		}
		ourmap[arr[i]] = true;
	}
	return -1;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i = 0 ;i < n; i++) {
			cin >> arr[i];
		}
		int ans = findDuplicate(arr, n);
		cout << ans << endl;
	}
}