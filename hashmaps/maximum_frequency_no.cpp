#include<bits/stdc++.h>
using namespace std;
int maximumFrequency(int *a, int size) {
	unordered_map<int, int> seen;
	int maxValue = 0;
	int maxCount = 0;
	for(int i = 0; i < size; i++) {
		if(seen.count(a[i]) > 0) {
			seen[a[i]]++;
			if(maxCount < seen[a[i]]) {
				maxValue = a[i];
				maxCount = seen[a[i]];
			}
			continue;
		}
		seen[a[i]] = 1;
		if(maxCount < seen[a[i]]) {
			maxValue = a[i];
			maxCount = seen[a[i]];
		}
	}
	return maxValue;
}
int main() {
	int arr[] = {2, 12, 2, 11, 12, 2, 1, 2, 2, 11, 12, 2, 6};
	int max_frequency = maximumFrequency(arr, 13);
	cout << max_frequency << endl; 
}