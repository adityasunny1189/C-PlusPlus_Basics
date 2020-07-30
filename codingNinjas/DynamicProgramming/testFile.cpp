#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str, T;
    getline(cin, str);
    map<string, int> ourmap;
    stringstream X(str); 
  
    while (getline(X, T, ' ')) { 
        if(ourmap.count(T) > 0) {
            ourmap[T]++;
            continue;
        } 
        ourmap[T] = 1;
    } 
    int ok = true;
    for(auto it = ourmap.begin(); it != ourmap.end(); it++) {
        if(it->second > 1) {
            cout << it->first << " " << it->second << endl;
            ok = false;
        }
    }
    if(ok) {
        cout << -1 << endl;
    }
}