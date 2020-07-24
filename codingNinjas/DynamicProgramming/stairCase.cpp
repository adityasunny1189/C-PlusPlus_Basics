#include<bits/stdc++.h>
using namespace std;

// Brute Force Recursive Approach
int StairCase(int n) {
	if(n <= 1) {
		return 1;
	}
	int oneStep = StairCase(n - 1);
	int twoStep = 0;
	int threeStep = 0;
	if(n >= 2) {
		twoStep = StairCase(n - 2);
	}
	if(n >= 3) { 
		threeStep = StairCase(n - 3);
	}
	return oneStep + twoStep + threeStep;
}

int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		cout << StairCase(n) << endl;
	}
}