#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, b;
        cin >> n >> b;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int no;
            cin >> no;
            v.push_back(no);
        }
        sort(v.begin(), v.end());
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(b >= v[i]) {
                count++;
                b -= v[i];
            }
        }
        cout << "case #" << t << ": " << count << endl;
    }
}