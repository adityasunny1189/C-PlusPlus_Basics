#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sum;
        cin >> n >> sum;
        vector<int> v;
        while(n--) {
            int no;
            cin >> no;
            v.push_back(no);
        }
        unordered_map<int, int> ourmap;
        for(int i = 0; i < v.size(); i++) {
            if(ourmap.count(v[i]) > 0) {
                ourmap[v[i]]++;
                continue;
            }
            ourmap[v[i]] = true;
        }
        bool found = false;
        for(int i = 0; i < v.size(); i++) {
            int temp = sum - v[i];
            if(ourmap[temp]) {
                if(temp == v[i] && ourmap[temp] == 1) {
                    continue;
                }
                cout << "Yes" << endl;
                found = true;
                break;
            }
        }
        if(!found) {
            cout << "No" << endl;
        }
    }
}