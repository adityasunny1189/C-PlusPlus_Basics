#include <bits/stdc++.h>
using namespace std;
void skmp(string s, string p) {
    map<char, int> ourmap;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++) {
        if(ourmap.count(s[i]) > 0) {
            ourmap[s[i]]++;
            continue;
        }
        ourmap[s[i]] = 1;
    }
    for(int i = 0; i < p.size(); i++) {
        ourmap[p[i]]--;
    }
    bool added = false;
    bool andarGaya = false;
    for(auto i = ourmap.begin(); i != ourmap.end(); i++) {
        if(i->second) {
            andarGaya = true;
            if(!added && (int(i->first) > int(p[0]))) {
                cout << p;
                added = true;
            }
            for(int j = 0; j < i->second; j++)
                cout << i->first;
        }
    }
    if(!andarGaya || !added) {
        cout << p;
    }
    cout << endl;
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--) {
        string s, p;
        cin >> s >> p;
        skmp(s, p);
    }
}