#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_case;
	cin >> test_case;
	for(int i = 0; i < test_case; i++) {
		int start, end;
		cin >> start >> end;
		for(int j = start; j <= end; j++) {
			int prim = 0;
			for(int k = 1; k <= j; k++) {
				if(j % k == 0) {
					prim++;
				}
			}
			if(prim == 2) {
				cout << j << endl;
			}
		}
	}
	return 0;
}
