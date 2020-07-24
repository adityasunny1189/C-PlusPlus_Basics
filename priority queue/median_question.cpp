#include<bits/stdc++.h>
using namespace std;
// median = if even n/2 + n/2 +1 th if odd n/2 th
void median(int *arr, int n) {
	priority_queue<int> pq;
	for(int i = 0; i < n; i++) {
		pq.push(arr[i]);
		priority_queue<int> temp = pq;
		if(temp.size() % 2 != 0) {
			for(int j = 0; j < temp.size() / 2; j++) {
				temp.pop();
			}
			cout << temp.top();
		} else {
			for(int j = 0; j < temp.size() / 2; j++) {
				temp.pop();
			}
			int n1 = temp.top();temp.pop();
			int n2 = temp.top();
			cout << (n1 + n2) / 2 << endl;
		}
	}
}