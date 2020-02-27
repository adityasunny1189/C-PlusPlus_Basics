#include <iostream>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	for(int k = 0; k < test_case; k++) {
	    int size;
		cin >> size;
	    int arr[10000];
	    for(int i = 0; i < size; i++) {
	        cin >> arr[i];
	    }
	    int count = 0;
	    for(int i = 0; i < size; i++) {
	        if(arr[i] == 0) {
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
