#include<iostream>
using namespace std;
int subs(string input, string output[]) {
	if(input.length() == 0) {
		output[0] = "";
		return 1;
	}
	string smallInput = input.substr(1);
	int smallSize = subs(smallInput, output);
	for(int i = 0; i < smallSize; i++) {
		output[smallSize + i] = input[0] + output[i];
	}
	return 2 * smallSize;
}
int main() {
	string input;
	cin >> input;
	string output[1000];
	int size = subs(input, output);
	for(int i = 0; i < size; i++) {
		cout << output[i] << endl;
	}
}
