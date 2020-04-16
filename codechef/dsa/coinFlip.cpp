#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long g;
		cin >> g;
		while(g--) {
			long i, n, q;
			cin >> i >> n >> q;
            long ch = 0;
            long ct = 0;
            if(n % 2 == 0) {
                ch = ct = (n / 2);
            }
            else {
                if(i == 1) {
                    ch = (n - 1) / 2;
                    ct = (n + 1) / 2;
                }
                else {
                    ch = (n + 1) / 2;
                    ct = (n - 1) / 2;
                }
            }
            if(q == 1) {
                cout << ch << endl;
            } else {
                cout << ct << endl;
            }
		}
	}
}
