#include<iostream>
using namespace std;
int &func() {
	int i = 90;
	return i;
}
int main() {
	int j = 10;
	int &k = func();
	cout << j << endl;
	cout << k << endl;
}
