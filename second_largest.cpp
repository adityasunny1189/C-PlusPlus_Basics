#include<iostream>
using namespace std;
int main() {
	int size;
	int largest, second_largest;
	cin >> size;
	int no;
	cin >> no;
	largest = second_largest = no;
	for(int i = 1; i < size; i++) {
		cin >> no;
		if(no > largest) {
			second_largest = largest;
			largest = no;
		}
		else if(no > second_largest) {
			second_largest = no;
		}
	}
	cout << "Largest: " << largest << " second_largest: " << second_largest << endl;
}
