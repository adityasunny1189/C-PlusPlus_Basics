#include<iostream>
using namespace std;
char* inttobin(int n) {
	char *ch = new char[100];
	int i = 0;
	while(n > 0) {
		int rem = n % 2;
		n = n / 2;
		ch[i++] = '0' + rem;
	}
	ch[i] = '\0';
	return ch;
}

int main() {
	int n;
	char ch[100];
	cin >> n;
	cout << inttobin(n) << endl;
}
