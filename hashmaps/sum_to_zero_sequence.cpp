#include<unordered_map>
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
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << lengthOfLongestSubsetWithZeroSum(arr, n) << endl;
}