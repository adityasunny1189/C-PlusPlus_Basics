#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
	unordered_map<string, int> u;
	pair<string, int> p("def", 2);
	u.insert(p);
	u["abc"] = 3;
	if(u.count("abc")) {
		cout << "abc is present" << endl;
	} else {
		cout << "abc is not present" << endl;
	}
	cout << "size: " << u.size() << endl;
	cout << u.at("abc") << endl;
	u.erase("abc");
	cout << "size: " << u.size() << endl;
	if(u.count("abc")) {
		cout << "abc is present" << endl;
	} else {
		cout << "abc is not present" << endl;
	}
}