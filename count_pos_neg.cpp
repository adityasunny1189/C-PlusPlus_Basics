#include<iostream>
using namespace std;
int main() {
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int p = 0;
	int n = 0;
	int z = 0;
	for(int i = 0; i < size; i++) {
		if(arr[i] > 0) {
			p++;
		}
		else if(arr[i] < 0) {
			n++;
		}
		else {
			z++;
		}
	}
	cout << (float)p/size << endl;
	cout << (float)n/size << endl;
	cout << (float)z/size << endl;
}
