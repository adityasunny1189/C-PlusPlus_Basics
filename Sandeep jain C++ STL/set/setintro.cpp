#include<iostream>
#include<set>
using namespace std;
int main() {
	set<int> s;
	s.insert(19);
	s.insert(12);
	s.insert(19);
	s.insert(12);
	s.insert(1);
	s.insert(2);
	s.insert(11);
	s.insert(15);
	for(auto i = s.begin(); i != s.end(); i++) {
		cout << (*i) << " ";
	}
	cout << endl;
}