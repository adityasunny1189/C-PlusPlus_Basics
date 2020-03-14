#include<iostream>
using namespace std;
void subString(char str[]) {
	for(int i = 0; str[i] != '\0'; i++) {
		for(int j = i; str[j] != '\0'; j++) {
			for(int k = i; k <= j; k++) {
				cout << str[k];
			}
			cout << endl;
		}
	}
}
int main() {
	char str[100];
	cin >> str;
	subString(str);
}
