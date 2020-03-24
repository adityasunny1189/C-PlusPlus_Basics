#include <iostream>
using namespace std;

int printPattern(int n) {
    if(n <= 0) {
        cout << n << " ";
        return n + 5;
    }
    cout << n << " ";
    int smallAns = printPattern(n - 5);
    cout << smallAns << " ";
    return smallAns + 5;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int no = printPattern(n);
		cout << endl;
	}
	return 0;
}
