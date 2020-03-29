#include<iostream>
using namespace std;
int main() {
    int size;
    int *arr = new int[size];
    int high = -999;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++) {
        if(high < arr[i]) {
            high = arr[i];
        }
    }
	cout << high << endl;
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(high == arr[i]) {
            count++;
        }
    }
    cout << count << endl;
}
