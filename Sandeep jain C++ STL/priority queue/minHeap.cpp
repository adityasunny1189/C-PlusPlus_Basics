#include<bits/stdc++.h>
using namespace std;
int main() {
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(10);
	pq.push(4);
	pq.push(12);
	pq.push(7);
	cout << pq.size() << endl;
	cout << pq.top() << endl;
	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
}