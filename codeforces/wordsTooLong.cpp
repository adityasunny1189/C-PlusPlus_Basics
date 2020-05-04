#include<bits/stdc++.h>
using namespace std;
int main() {
	long long i;
	cin >> i;
	string *arr = new string[i];
	for(int k = 0; k < i; k++) {
		cin >> arr[k];
	}
	int z = 0;
	while(z < i) {
		string s = arr[z];
		if(s.length() <= 10) {
			cout << s << endl;
		} else {
			long long count = s.length() - 2;
			string num = to_string(count);
			char ans[5];
			ans[0] = s[0];
			ans[1] = num[0];
			ans[2] = num[1];
			ans[3] = s[count - 1];
			ans[4] = '\0';
			for(int j = 0; j < 5; j++) {
				cout << ans[j];
			}
			cout << endl;
		}
		z++;
	}
}
