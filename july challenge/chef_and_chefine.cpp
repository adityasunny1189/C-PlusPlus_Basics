#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        for(int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            a.push_back(ele);
        }
        for(int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            b.push_back(ele);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = 0;
        int notPossible = false;
        for(int i = 0; i < n; i++) {
            if(a[i] == b[i]) {
                i++;
            }
            else if(i == n - 1) {
                notPossible = true;
            }
            else {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
                i = 0;
            }
        }
        if(notPossible) {
            cout << "-1" << endl;
        }
        else {
            cout << ans << endl;
        }
    }
}