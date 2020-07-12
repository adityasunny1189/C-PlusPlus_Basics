#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            v.push_back(ele);
        }
        int count = 0;
        for(int i = 0; i < n - 1; i++) {
            count += (max(v.at(i), v.at(i + 1)) - min(v.at(i), v.at(i + 1)) - 1);
        }
        cout << count << endl;
    }
}