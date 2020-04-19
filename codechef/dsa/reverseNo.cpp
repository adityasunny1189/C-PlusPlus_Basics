#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string str = to_string(n);
        int len = str.length();
        int reverseNo = 0;
        while(n > 0) {
            int rem = n % 10;
            n /= 10;
            reverseNo += rem * pow(10, len - 1);
            len--;
        }
        cout << reverseNo << endl;
    }
}