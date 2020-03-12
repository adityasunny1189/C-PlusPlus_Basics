#include<iostream>
using namespace std;
int length(char input[]) {
	int i;
	for(i = 0; input[i] != '\0'; i++) {
		continue;
	}
	return i;
}
void reverseString(char input[]) {
	int len = length(input);
	for(int i = 0, j = len - 1; i < j; i++, j--) {
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
	}
}
int main() {
	char input[100];
	cin.getline(input, 100);
	cout << input << endl;
	reverseString(input);
	cout << input << endl;
}
