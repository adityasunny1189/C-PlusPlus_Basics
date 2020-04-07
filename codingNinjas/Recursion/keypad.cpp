#include<bits/stdc++.h>
using namespace std;
string ans[] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int keypad(int n, string output[]) {
	if(n == 0) {
		output[0] = "";
		return 1;
	}
	int index = keypad(n / 10, output);
	string str[1000];
	for(int i = 0; i < index; i++) {
		str[i] = output[i];
	}
	int temp = (n % 10) - 1;
	int k = 0;
	for(int i = 0; ans[temp][i] != '\0'; i++) {
		for(int j = 0; j < index; j++) {
			output[k++] = str[j] + ans[temp][i];
		}
	}
	return k;
}
int main() {
	int num;
	cin >> num;
	string output[1000];
	int size = keypad(num, output);
	for(int i = 0; i < size; i++) {
		cout << output[i] << endl;
	}
}
