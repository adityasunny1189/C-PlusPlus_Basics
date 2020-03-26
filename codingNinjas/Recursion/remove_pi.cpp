#include<iostream>
using namespace std;
void removePI(char str[]) {
	if(str[0] == '\0')
		return;
	if(str[0] == 'p') {
		if(str[1] == 'i') {
			str[0] = '3';
			str[1] = '.';
			
			removePI(str + 2);
		} else {
			removePI(str + 1);
		}
	} else {
		removePI(str + 1);
	}
}

int main() {
	char str[100];
	cin >> str;
	removePI(str);
	cout << str << endl;
}
