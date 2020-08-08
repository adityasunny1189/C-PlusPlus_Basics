#include <iostream>
using namespace std;
void game(int pc, int pr) {
    int cn = (pc / 9);
    int rn = (pr / 9);
    pc %= 9;
    pr %= 9;
    if(pc) {
        cn++;
    }
    if(pr) {
        rn++;
    }
    if(cn < rn) {
        cout << 0 << " " << cn << endl;
    } else {
        cout << 1 << " " << rn << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int pc, pr;
        cin >> pc >> pr;
        game(pc, pr);
    }
}