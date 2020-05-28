#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[] = {3, 8, 1, 9, 34, 12, 5};
	priority_queue<int> pq(arr, arr + 7);
	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
}