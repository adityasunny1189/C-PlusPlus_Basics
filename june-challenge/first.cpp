#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		vector<int> v;
		cin >> n >> k;
		long long original = 0;
		long long cur = 0;
		for(int i = 0; i < n; i++) {
			int p;
			cin >> p;
			if(p > k) {
				cur += (p-k);
			}
			v.push_back(p);
		} 
		cout << cur << endl;
	}
}