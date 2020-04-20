#include<bits/stdc++.h>
using namespace std;
void checkAns(int n, int k) {
    if(((n + k) % 2 == 0) && (n >= (k * k))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        checkAns(n, k);
    }
}