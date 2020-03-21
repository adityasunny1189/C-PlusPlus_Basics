#include <iostream>
using namespace std;
void sortArray(int arr[], int size) {
	for(int i = 1; i < size; i++) {
	    int num = arr[i];
	    int j = i - 1;
	    while(j >= 0 && num < arr[j]) {
	        arr[j + 1] = arr[j];
	        j--;
	    }
	    arr[j + 1] = num;
	}
}
int main() {
	int test_case;
	cin >> test_case;
	for(int i = 0; i < test_case; i++) {
	    int size;
	    cin >> size;
	    int *arr = new int[size];
	    for(int j = 0; j < size; j++) {
	        cin >> arr[j];
	    }
	    int pos;
	    cin >> pos;
		sortArray(arr, size);
	    cout << arr[pos - 1] << endl;
	}
	return 0;
}
