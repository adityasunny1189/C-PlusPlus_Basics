#include<bits/stdc++.h>
using namespace std;
int main() {
	vector <int> arr = {10, 20, 30, 40, 50};
	vector <int> :: iterator i = arr.begin();
	auto j = arr.begin();
	cout << (*i) << " " << (*j) << endl;
	// i++;
	// j++;
	// cout << (*i) << " " << (*j) << endl;
	i = next(i, 2);
	j = next(j, 2);
	cout << (*i) << " " << (*j) << endl;
	advance(i, 2);
	cout << (*i) << endl;
	// i = prev(i);
	// j = prev(j);
	// cout << (*i) << " " << (*j) << endl;
}
