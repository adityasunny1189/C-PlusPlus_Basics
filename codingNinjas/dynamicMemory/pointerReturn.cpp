#include<iostream>
using namespace std;
int* fun() {
	int i = 10;
	return &i;
}
int main() {
	int* ptr = fun();
	cout << ptr << endl;
	cout << *ptr << endl;
}
