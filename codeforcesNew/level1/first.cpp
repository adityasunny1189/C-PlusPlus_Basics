#include<bits/stdc++.h>
using namespace std;

void ap() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
int main() {
	ap();
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int input[n][3];
		int output[2];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < 3; j++) {
				cin >> input[i][j];
			}
		}

		for(int i = 0; i < n; i++) {
			output[i] = input[0][i] + input[1][i] + input[2][i];
		}
		int ans = true;
		for(int i = 0; i < 3; i++) {
			if(output[i] != 0) {
				ans = false;
			}
		}
		if(ans) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}