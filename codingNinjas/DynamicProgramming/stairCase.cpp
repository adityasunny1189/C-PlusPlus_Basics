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

// Memoization / Top Down Approach
int helper(int n, int *arr) {
	if(n <= 1) {
		return 1;
	}
	if(arr[n] != -1) {
		return arr[n];
	}
	int oneStep = helper(n - 1, arr);
	int twoStep = 0;
	int threeStep = 0;
	if(n >= 2) {
		twoStep = helper(n - 2, arr);
	}
	if(n >= 3) { 
		threeStep = helper(n - 3, arr);
	}
	arr[n] = oneStep + twoStep + threeStep;
	return arr[n];
}

int StairCaseMemo(int n) {
	int *arr = new int[n + 1];
	for(int i = 0; i <= n; i++) {
		arr[i] = -1;
	}
	return helper(n, arr);
}

// Dynamic Programming
int StairCaseDP(int n) {
	int *arr = new int[n + 1];
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for(int i = 4; i <= n; i++) {
		int oneStep = arr[i - 1];
		int twoStep = 0;
		int threeStep = 0;
		if(i >= 2) {
			twoStep = arr[i - 2];
		}
		if(i >= 3) { 
			threeStep = arr[i - 3];
		}
		arr[i] = oneStep + twoStep + threeStep;
	}
	return arr[n];
}

int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		cout << StairCaseDP(n) << endl;
	}
}