#include<bits/stdc++.h>
using namespace std;

// Brute force recursive approach
int minCount(int n) {
	if(n <= 1) {
		return 0;
	}
	stack<int> st;
	for(int i = 1; i <= sqrt(n); i++) {
		st.push(minCount(n - (i * i)));
	}
	return st.top() + 1;
}

int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		cout << minCount(n) << endl;
	}
}