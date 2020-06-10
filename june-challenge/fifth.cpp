#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int temp = 1;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                for(int j = 0; j < n; j++) {
                    cout << temp << " ";
                    temp++;
                }
            } else {
                temp = temp + n - 1;
                for(int j = 0; j < n; j++) {
                    cout << temp << " ";
                    temp--;
                }
                temp = temp + n + 1;
            }
            cout << endl;
        }
    }
}