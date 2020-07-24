#include<bits/stdc++.h>
using namespace std;

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

int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    while(test--) {
    	int n;
		cin >> n;
		cout << minToOne(n) << endl;
    }
}