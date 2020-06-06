#include<bits/stdc++.h>
# define int long long
using namespace std;
int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int ts;
		cin >> ts;
		int count = 0;
		if(ts % 2 != 0) {
			count = ts / 2;
		}
		else {
			while(ts % 2 == 0) {
				ts /= 2;
			}
			count = ts / 2;
		}
		cout << count << endl;
	}
}