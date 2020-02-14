#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 0;
    int count = 1;
    while(i < n) {
        int j = 0;
        while(j < pow(2, i)) {
			if(count == 0)
				count = 1;
            cout << count;
            count++;
			count %= 10;
            j++;
        }
        cout << endl;
        i++;
		count %= 10;
    }
}

// 1
// 23
// 4567
// 89123456
// 7891234567891234
