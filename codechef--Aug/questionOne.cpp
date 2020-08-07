#include <iostream>
using namespace std;
int fight(int h, int p) {
    while(true) {
        if(h <= 0) {
            return 1;
        }
        if(p <= 0) {
            return 0;
        }
        h = h - p;
        p = p / 2;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int h, p;
        cin >> h >> p;
        int ans = fight(h, p);
        cout << ans << endl;
    }
}