// #include<iostream>
// #define int long long
// using namespace std;
// int fib(int n) {
// 	int *ans = new int[n + 1];
// 	ans[0] = ans[1] = 1;
// 	for(int i = 2; i < n + 1; i++) {
// 		ans[i] = ans[i-1] + ans[i-2];
// 	}
// 	return ans[n];
// }
// int32_t main() {
// 	freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// 	int n;
// 	cin >> n;
// 	cout << fib(n) << endl;
// }

#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubsetWithZeroSum(int* arr, int size){
	unordered_map<int, int> ourmap;
    int maxLength = 0;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        int len = 0;
        sum += arr[i];
        if(ourmap.count(sum) > 0) {
            len = i - ourmap[sum];
            if(len > maxLength) {
                maxLength = len;
            }
            continue;
        }
        ourmap[sum] = i;
    }
    return maxLength;
}
int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << lengthOfLongestSubsetWithZeroSum(arr, n) << endl;
}