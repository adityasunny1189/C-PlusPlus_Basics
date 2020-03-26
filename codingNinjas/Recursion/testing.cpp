#include<iostream>
using namespace std;
void replace(char str[], char c1, char c2) {
	if(str[0] == c1) {
		str[0] = c2;
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
