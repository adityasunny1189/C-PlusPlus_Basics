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
	for(int i = 0; i < len;) {
		int start, end;
		for(end = i; input[end] != ' ' && end < len; end++) {
			continue;
		}
		int var = end;
		end--;
		for(start = i; start < end; start++, end--) {
			char temp = input[start];
			input[start] = input[end];
			input[end] = temp;
		}
		i = var + 1;
	}
}
int main() {
	char input[100];
	cin.getline(input, 100);
	cout << input << endl;
	reverseString(input);
	cout << input << endl;
}
