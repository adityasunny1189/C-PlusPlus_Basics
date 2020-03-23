#include<iostream>
using namespace std;
int countZeros(int n) {
	if(n == 0) {
		return 1;
	}
	if(n > 0 && n < 10) {
		return 0;
	}
	int smallSum = countZeros(n / 10);
	if(smallSum) {
		return smallSum + 1;
	}
	else {
		return smallSum;
	}
}
