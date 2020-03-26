#include<iostream>
using namespace std;
void remove(char str[]) {
	if(str[0] == '\0') {
		return;
	}
	if(str[0] == str[1]) {
		int j = 1;
		for(; str[j] != '\0'; j++) {
			str[j - 1] = str[j];
		}
		str[j - 1] = str[j];
		remove(str);
	} else {
		remove(str + 1);
	}
}
int main() {
	char str[100];
	cin >> str;
	remove(str);
	cout << str << endl;
}
