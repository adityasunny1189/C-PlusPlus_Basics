#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int x, k;
		cin >> x >> k;
		int ans;
		if(k == 1) {
			if(x == 2) {
				ans = 1;
			} else {
				ans = 0;
			}
		}
		else if(k == 2){
			if(isPrime(x)) {
				ans = 1;
			} else {
				ans = 0;
			}
		}
		cout << ans << endl;
	}
}
