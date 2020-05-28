#include<bits/stdc++.h>
using namespace std;
void patternChecker(string s) {
	stack<char> st;
	bool count = true;
	for(int i = 0; s[i] != '\0'; i++) {
		if(s[i] == 'x' && count) {
			st.push(s[i]);
			continue;
		}
		if(s[i] == 'x' && count == false) {
			cout << "0" << endl;
			return;
		}
		if(s[i] == 'y' && i == 0) {
			cout << "0" << endl;
			return;
		}
		if(s[i] == 'y') {
			st.pop();
			if(st.size() != 0) {
				count = false;
			} else {
				count = true;
			}
		}
	}
	if(st.size() == 0) {
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
	}
}

int main() {
	string s;
	cin >> s;
	patternChecker(s);
}