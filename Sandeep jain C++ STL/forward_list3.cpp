#include<iostream>
#include<forward_list>
using namespace std;
int main() {
	forward_list<int> l1;
	l1.assign({10, 20, 30});
	// 10 -> 20 -> 30
	auto it = l1.insert_after(l1.begin(), 40);
	// 10 -> 40 -> 20 -> 30
	it = l1.insert_after(it, {2, 3, 4});
	// 10 -> 40 -> 2 -> 3 -> 4 -> 20 -> 30 
	it = l1.emplace_after(it, 12);
	// 10 -> 40 -> 2 -> 3 -> 4 -> 12 -> 20 -> 30
	it = l1.erase_after(it);
	// 10 -> 40 -> 2 -> 3 -> 4 -> 12 -> 30
	for(auto i: l1) {
		cout << i << " ";
	}
	cout << endl;
}