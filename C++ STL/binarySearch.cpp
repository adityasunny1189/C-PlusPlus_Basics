#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	int len = str.length() / 2;
	string p1, p2;
	if(str.length() % 2 == 0) {
		p1 = str.substr(0, len);
		p2 = str.substr(len, str.length());
	}
	else {
		p1 = str.substr(0, len);
		p2 = str.substr(len + 1, str.length());
	}
	long count1 = 0;
	long count2 = 0;
	for(int i = 0; i < p1.length(); i++) {
		char ch = p1[i];
		count1 += (ch - '0');
	}
	for(int i = 0; i < p2.length(); i++) {
		char ch = p2[i];
		count2 += (ch - '0');
	}
	if(count1 == count2) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
