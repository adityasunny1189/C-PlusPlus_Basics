#include<iostream>
#define int long long
using namespace std;
int fib_helper(int n, int *ans) {
	if(n <= 1) {
		return 1;
	}
	if(ans[n] != -1) {
		return ans[n];
	}
	ans[n] = fib_helper(n-1, ans) + fib_helper(n-2, ans);
	return ans[n];
}
int fib(int n) {
	int *ans = new int[n + 1];
	for(int i = 0; i < n + 1; i++) {
		ans[i] = -1;
	}
	return fib_helper(n, ans);
}
int32_t main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	cout << fib(n) << endl;
}