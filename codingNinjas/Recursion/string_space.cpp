#include<iostream>
using namespace std;
void shift(char arr[]) {
    int len = 0;
    while(arr[len] != '\0') {
        len++;
    }
    for(int j = len; j > 0; j--) {
        arr[j] = arr[j - 1];
    }
	arr[len + 1] = '\0';
}

void pairStar(char input[]) {
    int len = 0;
    while(input[len] != '\0') {
        len++;
    }
    if(len == 0) {
        return;
    }
    pairStar(input + 1);
    if(input[0] == input[1]) {
        shift(input + 1);
        input[1] = '*';
		cout << "call: " << input << endl;
    } else {
		return;
	}
}

int main() {
	char str[100];
	cin >> str;
	cout << str << endl;
	pairStar(str);
	cout << str << endl;
}
