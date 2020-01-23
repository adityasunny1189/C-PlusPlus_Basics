#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    vector<int> v;
    cin >> size;
    for(int i = 0; i < size; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int index_to_be_removed;
    cin >> index_to_be_removed;
    index_to_be_removed--;
    v.erase(v.begin()+index_to_be_removed);
    int start, end;
    cin >> start >> end;
    start--;
    end--;
    v.erase(v.begin()+start,v.begin()+end);
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
