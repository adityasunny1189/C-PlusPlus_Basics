#include<iostream>
using namespace std;
int sumOfDigits(int n) {
	if(n < 10) {
		return n;
	}
	int rem = n % 10;
	int smallSum = sumOfDigits(n / 10);
	return rem + smallSum;
}
int main() {
	int n;
	cin >> n;
	cout << sumOfDigits(n) << endl;
}
