#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long count = 0;
		long no;
		cin >> no;
		while(no >= 5) {
			no /= 5;
			count += no;
		}
	    cout << count << endl;
	}
	return 0;
}
