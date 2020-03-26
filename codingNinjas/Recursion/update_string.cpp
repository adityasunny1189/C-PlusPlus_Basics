#include<iostream>
using namespace std;
void replace(char str[], char c1, char c2) {
	if(str[0] == '\0') {
		return;
	}
	if(str[0] == c1) {
		cout << str[0] << " ";
		str[0] = c2;
		cout << str[0] << " ";
		cout << "1: " << str << endl;
		replace(str + 1, c1, c2);
	}
	else {
		cout << "2: " << str << endl;
		replace(str + 1, c1, c2);
	}
}
int main() {
	char str[100];
	cin >> str;
	char c1, c2;
	cin >> c1 >> c2;
	replace(str, c1, c2);
	cout << str;
}
