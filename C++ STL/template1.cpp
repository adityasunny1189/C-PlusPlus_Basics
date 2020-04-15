#include<bits/stdc++.h>
using namespace std;
template <typename T>
T myMax(T x, T y) {
	return (x > y) ? x : y;
}
int main() {
	cout << myMax<int>(3, 8) << endl;
	cout << myMax<char>('a', 'f') << endl;
}
