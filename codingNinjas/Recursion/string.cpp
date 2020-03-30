#include<iostream>
using namespace std;
int main() {
	// string s;
	// cin >> s;
	// cout << s << endl;
	string s1;
	getline(cin, s1);
	cout << s1 << endl;
	string s2 = s1.substr(3, 6);
	int size = s1.length();
	int size1 = s1.size();
	cout << "Size: " << size << " " << size1 << endl;
	int index = s1.find("Pathak");
	cout << "Index: " << index << endl;
	string pat = s1.substr(index, 6);
	cout << pat << endl;
}
