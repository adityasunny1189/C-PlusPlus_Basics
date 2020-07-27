#include<bits/stdc++.h>
using namespace std;

int countBBT(int n) {
	if(n <= 1) {
		return 1;
	}
	int countH_1 = countBBT(n - 1);
	int countH_2 = 0;
	if(n >= 2)
		countH_2 = countBBT(n - 2);
	return (countH_1 + countH_2);
}

int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << countBBT(n) << endl;
	}
}