#include<bits/stdc++.h>
using namespace std;
template <typename T>
T MaxNo(T arr[], int n) {
	T ans = arr[0];
	for(int i = 1; i < n; i++) {
		if(ans < arr[i]) {
			ans = arr[i];
		}
	}
	return ans;
}
int main() {
	vector<int> arr = {1, 5, 9, 2, 8, 4, 53, 27, 34};
	cout << MaxNo<int>(arr, 9) << endl;
}
