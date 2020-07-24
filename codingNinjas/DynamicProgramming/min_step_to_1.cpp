#include<bits/stdc++.h>
using namespace std;

// Brute force recursive approach
int minToOne(int n) {
	if(n == 1) {
		return 0;
	}
	int x = minToOne(n - 1);
	int y = n;
	int z = n;
	if(n % 2 == 0) {
		y = minToOne(n / 2);
	}
	if(n % 3 == 0) {
		z = minToOne(n / 3);
	}
	return min(z, min(x, y)) + 1;
}

// Memoization / Top down approach
int helperMemo(int n, int *arr) {
	if(n == 1) {
		return 0;
	}
	if(arr[n] != -1) {
		return arr[n];
	}
	int x = helperMemo(n - 1, arr);
	int y = n;
	int z = n;
	if(n % 2 == 0) {
		y = helperMemo(n / 2, arr);
	}
	if(n % 3 == 0) {
		z = helperMemo(n / 3, arr);
	}
	arr[n] = min(z, min(x, y)) + 1;
	return arr[n];
}


int minToOneMemo(int n) {
	int *arr = new int[n + 1];
	for(int i = 0; i < n + 1; i++) {
		arr[i] = -1;
	}
	return helperMemo(n, arr);
}

// Dynamic Programming
int minToOneDP(int n) {
	int *arr = new int[n + 1];
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	for(int i = 4; i <= n; i++) {
		int x, y = n, z = n;
		x = arr[i - 1];
		if(i % 2 == 0) {
			y = arr[i / 2];
		}
		if(i % 3 == 0) {
			z = arr[i / 3];
		}
		arr[i] = min(z, min(x, y)) + 1;
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
		cout << minToOneDP(n) << endl;
    }
}