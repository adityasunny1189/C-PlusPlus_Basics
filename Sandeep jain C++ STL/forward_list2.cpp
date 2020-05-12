#include<iostream>
#include<forward_list>
using namespace std;
int main() {
	forward_list<int> l1;
	l1.assign({10, 20, 30, 40, 10});
	forward_list<int> l2;
	l2.assign(l1.begin(), l1.end());
	for(auto i = l2.begin(); i != l2.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	l1.remove(10);
	for(auto i = l1.begin(); i != l1.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}