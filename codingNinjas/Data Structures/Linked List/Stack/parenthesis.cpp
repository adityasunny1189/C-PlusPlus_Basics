#include<iostream>
#include<string>
#include<stack>
using namespace std;
int value(char ch) {
	switch(ch) {
		case '(': 
		case ')': return 1;
		case '{':
		case '}': return 2;
		case '[':
		case ']': return 3;
	}
}
bool checkPara(string exp) {
	stack<char> s;
	s.push('\0');
	for(int i = 0; exp[i] != '\0'; i++) {
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
			s.push(exp[i]);
		}
		if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
			if(value(s.top()) == value(exp[i])) {
				s.pop();
			}
			else {
				return false;
			}
		}
	}
	return (s.top() == '\0');
}
int main() {
	string s1;
	cin >> s1;
	if(checkPara(s1)) {
		cout << "Balanced" << endl;
	}
	else {
		cout << "Un-Balanced" << endl;
	}
}
