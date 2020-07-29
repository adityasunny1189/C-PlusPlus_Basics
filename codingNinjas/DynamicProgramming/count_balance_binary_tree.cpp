#include<bits/stdc++.h>
using namespace std;

// recursion
int countBBT(int n) {
	if(n <= 1) {
		return 1;
	}
	int mod = (int)(pow(10, 9)) + 7;
	int countH_1 = countBBT(n - 1);
	int countH_2 = countBBT(n - 2);
	int x = (int)(((long long)(countH_1) * countH_1) % mod);
	int y = (int)(((long long)(countH_1) * countH_2 * 2) % mod);
	int ans = (x + y) % mod;
	return ans;
}

// Memoization
int helper(int h, int *visited) {
    if(h <= 1) {
        return 1;
    }
    if(visited[h]) {
        return visited[h];
    }
    int mod = (int)(pow(10, 9)) + 7;
    int x = helper(h - 1, visited);
    int y = helper(h - 2, visited);
    int t1 = ((long long)(x) * x) % mod;
    int t2 = ((long long)(x) * 2 * y) % mod;
    int ans = (t1 + t2) % mod;
    visited[h] = ans;
    return ans;
}

int binaryTreesOfHeightH(int h) {
	int *visited = new int[h];
    for(int i = 0; i < h; i++) {
        visited[i] = 0;
    }
    return helper(h, visited);
}


int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		// cout << countBBT(n) << endl;
		cout << binaryTreesOfHeightH(n) << endl;
	}
}