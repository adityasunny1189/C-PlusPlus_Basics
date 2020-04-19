#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int activity;
        string origin;
        cin >> activity >> origin;
        int total_laddo = 0;
        while(activity--) {
            string str;
            cin >> str;
            if(str == "CONTEST_WON") {
                total_laddo += 300;
                int no;
                cin >> no;
                if(no < 20) {
                    total_laddo += 20 - no;
                }
            }
            if(str == "TOP_CONTRIBUTOR") {
                total_laddo += 300;
            }
            if(str == "BUG_FOUND") {
                int no;
                cin >> no;
                total_laddo += no;
            }
            if(str == "CONTEST_HOSTED") {
                total_laddo += 50;
            }
        }
        int ans = 0;
        if(origin == "INDIAN") {
            ans = total_laddo / 200;
        }
        else {
            ans = total_laddo / 400;
        }
        cout << ans << endl;
    }
}