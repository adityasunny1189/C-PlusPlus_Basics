#include<bits/stdc++.h>
using namespace std;

void intersection(int *a, int *b, int size1, int size2) {
	unordered_map<int, int> seen;
	int maxValue = 0;
	int maxCount = 0;
	for(int i = 0; i < size1; i++) {
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
	for(int i = 0; i < size2; i++) {		
        if(seen[b[i]]) {
			cout << b[i] << endl;
			seen[b[i]]--;
        }
	}

}

int main() {
	int a[] = {2,1,2,4,5,2,1,2,2,4};
	int b[] = {2,2,2,1,1,1,4,4,6,7};
	intersection(a, b, 10, 10);
}