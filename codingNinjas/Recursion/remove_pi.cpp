#include<iostream>
using namespace std;
// void shift(string str) {
// 	for(int i = 0; i < 2; i++) {
// 		for(int j = str.length(); j >= 0; j--) {
// 			str[j + 1] = str[j];
// 			str[j] = str[j - 1];
// 		}
// 	}
// }
// void removePI(string str) {
// 	if(str.length() <= 1) {
// 		return;
// 	}
// 	removePI(str.substr(1));
// 	if(str[0] == 'p') {
// 		if(str[1] == 'i') {
// 			shift(str.substr(2));
// 			str[0] = '3';
// 			str[1] = '.';
// 			str[2] = '1';
// 			str[3] = '4';
// 		}
// 	}
// }
int length(char str[]) {
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}
void shift(char str[]) {
	for(int i = 0; i < 2; i++) {
		for(int j = length(str); j >= 0; j--) {
			str[j + 1] = str[j];
			str[j] = str[j - 1];
		}
	}
}

void replacePi(char input[]) {
	// Write your code here
    if(length(input) <= 1) {
        return;
    }
    replacePi(input + 1);
    if(input[0] == 'p') {
        if(input[1] == 'i') {
            shift(input + 2);
            input[0] = '3';
            input[1] = '.';
            input[2] = '1';
            input[3] = '4';
        }
    }
}

int main() {
	char str[1000];
	cin >> str;
	removePI(str);
	cout << str << endl;
}
