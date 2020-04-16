#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    for(int i = 0; i < 5; i++) {
        int no;
        cin >> no;
        v.push_back(no);
    }
    cout << "Vector Elements: " << endl;
    for(auto x: v) {
        cout << x << " ";
    }
    cout << endl;
}