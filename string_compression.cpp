#include<iostream>
using namespace std;
void compress(char input[]) {
	for(int i = 0; input[i] != '\0'; i++) {
        int count = 0;
		char ch = input[i];
        for(int j = i + 1; input[j] == input[i]; j++) {
            count++;
        }
        if(count != 0) {
            i++;
			count++;
            input[i] = '0' + count;
        }
		if(ch == input[i + 1]) {
			for(int j = i + 1; input[j] != '\0'; j++) {
	            input[j] = input[j + 1];
	        }
		}
		cout << input << endl;
    }
}
int main() {
	char input[1000];
	cin >> input;
	compress(input);
}
