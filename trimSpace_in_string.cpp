#include<iostream>
using namespace std;
void trimSpace(char arr[]) {
	for(int i = 0; arr[i] != '\0'; i++) {
		if(arr[i] == ' ') {
			int c, j = i;
			for(c = i; arr[c] == ' '; c++) {
				continue;
			}
			while(arr[j] != '\0') {
				arr[j] = arr[j + c - i];
				j++;
			}
		}
	}
}
int main() {
	char input[100];
	cin.getline(input, 100);
	cout << input << endl;
	trimSpace(input);
	cout << input << endl;
}
