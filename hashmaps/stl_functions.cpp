#include<bits/stdc++.h>
using namespace std;
void ap() 
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}
int main() {
	ap();
	int arr[] = {3,2,5,1,9,4};
	sort(arr, arr+6);
	for(int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	// cout << endl;
	// sort(arr, arr + 6, greater<int>());
	// for(int i = 0; i < 6; i++) {
	// 	cout << arr[i] << " ";
	// }
	cout << endl;
	cout << __gcd(12, 9) << endl;
	cout << lower_bound(arr, arr + 6, 5) - arr<< endl;
}