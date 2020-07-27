#include<bits/stdc++.h>
using namespace std;

// Brute force recursive approach
int minCount(int n) {
	if(n <= 1) {
		return 0;
	}
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 1; i <= sqrt(n); i++) {
		pq.push(minCount(n - (i * i)));
	}
	return pq.top() + 1;
}

// Memoization / Top down approach
int helper(int n, int *ans) {
    if(n < 1) {
		return 0;
	}
	if(n == 1) {
		return 1;
	}
    if(ans[n] != -1) {
        return ans[n];
    }
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 1; i <= sqrt(n); i++) {
		pq.push(helper((n - (i * i)), ans));
	}
	ans[n] = pq.top() + 1;
    return ans[n];
}

int minCountMemo(int n)
{
    int *ans = new int[n + 1];
    for(int i = 0; i < n + 1; i++) {
        ans[i] = -1;
    }
    return helper(n, ans);
}

// Dynamic Programming
int minCountDP(int n) {
	int *ans = new int[n + 1];
	priority_queue<int, vector<int>, greater<int>> pq;
	if(n < 1) {
		return 0;
	}
	if(n == 1) {
		return 1;
	}
	for(int i = 0; i < n; i++) {
		
	}
	ans[n] = pq.top() + 1;
	return ans[n];
}

int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		cout << minCountMemo(n) << endl;
	}
}