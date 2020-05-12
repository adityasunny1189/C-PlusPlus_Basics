#include<iostream>
#include<forward_list>
using namespace std;
int main() {
	forward_list<int> l1;
	l1.assign({13, 12, 4, 3});
	cout << "Linked List 1" << endl;
	for(auto i: l1) {
		cout << i << " ";
	}
	cout << endl;

	l1.reverse();
	cout << "Linked List 1 After Reverseing" << endl;
	for(auto i: l1) {
		cout << i << " ";
	}
	cout << endl;

	l1.sort();
	cout << "Linked List 1 After Sorting" << endl;
	for(auto i: l1) {
		cout << i << " ";
	}
	cout << endl;

	forward_list<int> l2;
	l2.assign({9, 5, 6, 1});
	l2.sort();
	
	l1.merge(l2);
	cout << "Linked List After Merging" << endl;
	for(auto i: l1) {
		cout << i << " ";
	}
	cout << endl;
}