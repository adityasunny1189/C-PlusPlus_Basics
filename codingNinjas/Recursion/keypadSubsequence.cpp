#include<iostream>
using namespace std;
int subs(int input, string output[]) {
	if(input == 0) {
		output[0] = "";
		return 1;
	}
	int smallInput = input / 10;
	input = input % 10;
	for(int i = 0)
}
int main() {
	int input;
	cin >> input;
	string output[1000];
	int size = subs(input, output);
	for(int i = 0; i < size; i++) {
		cout << output[i] << endl;
	}
}
