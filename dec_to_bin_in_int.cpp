#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long binNo = 0;
	for(int i = 1; n > 0; i *= 10, n /= 2) {
		int rem = n % 2;
		binNo += rem * i;
	}
	cout << binNo << endl;
}
