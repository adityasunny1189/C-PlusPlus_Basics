// #include<bits/stdc++.h>
// #define int long long
// using namespace std;
// int32_t main() {
// 	int t;
// 	cin >> t;
// 	while(t--) {
// 		int a[3];
// 		int b[3];
// 		for(int i = 0; i < 3; i++) {
// 			cin >> b[i];
// 		}
// 		for(int i = 0; i < 3; i++) {
// 			cin >> a[i];
// 		}
// 		int operation = 0;
// 		for(int i = 0; i < 3; i++) {
// 			if(a[i] - b[i] == 0) {
// 				continue;
// 			}
// 			int diff = a[i] - b[i];
// 			b[i] += diff;
// 			for(int j = i + 1; j < 3; j++) {
// 				if(a[j] - b[j] == diff) {
// 					b[j] += diff;
// 				}
// 			}
// 			operation++;
// 		}
// 		cout << operation << endl;
// 	}
// }


#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int a[3];
		int b[3];
		for(int i = 0; i < 3; i++) {
			cin >> b[i];
		}
		for(int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		set<int> s;
		for(int i = 0; i < 3; i++) {
			if(a[i] - b[i]) {
				s.insert(a[i] - b[i]);
			}
		}
		cout << s.size() << endl;
	}
}