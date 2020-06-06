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
			int ans;
			for(int i = 4; i <= ts; i += 2) {
				int temp = ts;
				int itemp = i;
				bool ansGot = false;
				while(true) {
					if(i % 2 == 0 && temp % 2 == 0) {
						i /= 2;
						temp /= 2;
						continue;
					}
					else if(i % 2 == 0 && temp % 2 != 0) {
						// count++;
						ansGot = true;
						ans = itemp;
						break;
					}
					else if(i % 2 != 0 && temp % 2 != 0) {
						break;
					}
					else {
						break;
					}
				}
				i = itemp;
				if(ansGot) {
					break;
				}
			}
			for(int j = ans; j <= ts; j += ans) {
				count++;
			}
		}
		cout << count << endl;
	}
}