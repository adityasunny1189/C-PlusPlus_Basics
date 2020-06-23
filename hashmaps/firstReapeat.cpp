#include<bits/stdc++.h>
using namespace std;
void ap() 
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}
int main() {
    ap();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        while(n--) {
            int no;
            cin >> no;
            v.push_back(no);
        }
        bool found = false;
        unordered_map<int, int> ourmap;
        for(int i = 0; i < v.size(); i++) {
            if(ourmap.count(v[i]) > 0) {
                cout << ourmap[v[i]] + 1 << endl;
                found = true;
                break;
            }
            ourmap[v[i]] = i;
        }
        if(!found) {
            cout << "-1" << endl;
        }
    }
}