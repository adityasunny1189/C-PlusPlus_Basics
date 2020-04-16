#include<bits/stdc++.h>
using namespace std;
template <typename T>
T MaxNo(T arr[], T n) {
	T ans = arr[0];
	for(int i = 1; i < n; i++) {
		if(ans < arr[i]) {
			ans = arr[i];
		}
	}
	return ans;
}
int main() {
	int arr[] = {1, 5, 9};
	cout << MaxNo<int> (arr, 3);
}
