#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
        vector<int> v;
    	int size ;
    	cin >> size;
    	for(int i = 0; i < size; i++) {
    		int no;
    		cin >> no;
    		v.push_back(no);
    	}
    	sort(v.begin(), v.end());
        int sum = 0;
        for(int i = size - 1, j = 0; i >= 0; i--, j++) {
            v[i] = v[i] - j;
            if(v[i] > 0) {
                sum += v[i];
            }
		}
		cout << sum << endl;
	}
}
