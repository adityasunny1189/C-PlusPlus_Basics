#include<iostream>
using namespace std;
int main( ) {
	int *p = new int;
	int &j = *p;
	j = 10;
	cout << p << endl;
	cout << *p << endl;
	cout << j << endl;
	cout << &j << endl;
	*p = 20;
	cout << p << endl;
	cout << *p << endl;
	cout << j << endl;
	cout << &j << endl;
	delete p;
}
