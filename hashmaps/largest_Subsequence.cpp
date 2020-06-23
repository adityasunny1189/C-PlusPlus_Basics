#include<bits/stdc++.h>
using namespace std;
vector<int> largestSubsequence(int *arr, int size) {
	unordered_map<int, bool> ourmap;
	for(int i = 0; i < size; i++) {
		ourmap[arr[i]] = true;
	}
	int maxSize = 0;
	int start = 0;
	int curStart, curSize;
	
}
int main() {
	int *arr = {9, 2, 4, 3, 1, 8, 7, 6, 10, 15, 20};
	vector<int> ans = largestSubsequence(arr, 11);
	vector<int>::iterator it = ans.begin();
	while(it != ans.end()) {
		cout << *it << endl;
		it++;
	}
}