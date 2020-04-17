#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<char> str;
    int count = 1;
    for(int i = 0; i < n; i++) {
        char ch;
        cin >> ch;
        str.push_back(ch);
        if(ch == 'U') {
            count++;
        } else {
            count--;
        }
    }
    cout << count << endl;
}