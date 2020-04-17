#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    cout << "Insert Elements:" << endl;
    for(int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << "Arrays Elements are: " << endl;
    for(auto x: v) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Vector Size: " << v.size() << endl;
    cout << "Vector Capacity: " << v.capacity() << endl;
    v.pop_back();
}