#include<bits/stdc++.h>
using namespace std; 
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int c5 = 0;
		int c10 = 0;
		int c15 = 0;
		bool possible = true;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			int p;
			cin >> p;
			v.push_back(p);
		}
		for(int i = 0; i < n; i++) {
			if(v.at(i) == 5) {
				c5++;
			}
			else if(v.at(i) == 10) {
				if(c5) {
					c5--;
					c10++;
				}
				else {
					possible = false;
					break;
				}
			}
			else {
				if(c10) {
					c10--;
					c15++;
				}
				else if(c5 >= 2) {
					c5 -= 2;
					c15++;
				}
				else {
					possible = false;
					break;
				}
			}
		}
		if(possible) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}