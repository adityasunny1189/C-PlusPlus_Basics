#include<iostream>
using namespace std;
int main() {
	int * i = new int;
	*i = 10;
	cout << "Previous" << endl;
	cout << i << endl;
	cout << *i << endl;
	delete i;
	cout << "Later" << endl;
	cout << i << endl;
	cout << *i << endl;
}
