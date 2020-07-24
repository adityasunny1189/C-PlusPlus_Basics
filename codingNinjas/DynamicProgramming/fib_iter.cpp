#include<iostream>
#define int long long
using namespace std;
int fib(int n) {
	int *ans = new int[n + 1];
	ans[0] = ans[1] = 1;
	for(int i = 2; i < n + 1; i++) {
		ans[i] = ans[i-1] + ans[i-2];
	}
	return ans[n];
}
int32_t main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	cout << fib(n) << endl;
}
