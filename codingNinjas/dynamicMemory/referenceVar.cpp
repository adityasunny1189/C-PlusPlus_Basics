#include<iostream>
using namespace std;
void refFunc(int &n) {
	n++;
}
int main() {
	int i = 65;
	int &j = i;
	cout << j << endl;
	j++;
	cout << i << endl;
	refFunc(i);
	cout << i << endl;
}
