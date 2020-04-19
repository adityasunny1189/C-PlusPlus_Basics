#include<bits/stdc++.h>
using namespace std;
int main() {
    long n;
    cin >> n;
    vector<long> arr;
    for(int i = 0; i < n; i++) {
        int no;
        cin >> no;
        arr.push_back(no);
    }
    sort(arr.begin(), arr.end());
    long long ans = 0;
    long long cur = 0;
    for(int i = 0; i < n; i++) {
        cur = arr[i] * (n - i);
        if(ans < cur) {
            ans = cur;
        }
    }
    cout << ans << endl;
}