#include<iostream>
using namespace std;
char maxChar(char input[]) {
	char ans = input[0];
	int count = 1;
    for(int j = 1; input[j] != '\0'; j++) {
        if(input[0] == input[j]) {
            count++;
        }
    }
   for(int i = 1; input[i] != '\0'; i++) {
        int sec = 1;
        for(int j = i + 1; input[j] != '\0'; j++) {
            if(input[i] == input[j]) {
                sec++;
            }
        }
        if(sec > count) {
			count = sec;
            ans = input[i];
        }
    }
    return ans;
}
int main() {
	char input[1000];
	cin >> input;
	cout << maxChar(input) << endl;
}
