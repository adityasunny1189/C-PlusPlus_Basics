#include<bits/stdc++.h>
using namespace std;
int main() {
	long long lr, br, a;
	cin >> lr >> br >> a;
	long long areaR = lr * br;
	long long areaS = a * a;
	long long count = 0;
	while(areaS <= areaR) {
		count++;
		areaS += areaS;
	}
	cout << count << endl;
}
