#include<iostream>
using namespace std;
int main() {
	char arr[10000];
	cin.getline(arr, 100);
	cout << arr << endl;
	for(int i = 0; arr[i] != '\0'; i++) {
		char letter = arr[i];
		int count = 0;
		for(int j = i + 1; arr[j] == letter; j++) {
			count++;
		}
		for(int j = i + 1; arr[j] != '\0'; j++) {
			arr[j] = arr[j + count];
		}
	}
	cout << arr << endl;
}
