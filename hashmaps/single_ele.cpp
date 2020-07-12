#include<bits/stdc++.h>
using namespace std;
void ap() 
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}
int uniqueEle(int *arr, int size) {
	unordered_map<int, int> ourmap;
	for(int i = 0; i < size; i++) {
		if(ourmap.count(arr[i]) > 0) {
			ourmap[arr[i]]++;
			continue;
		}
		ourmap[arr[i]] = 1;
	}
	unordered_map<int, int>::iterator it = ourmap.begin();
	while(it != ourmap.end()) {
		if(it->second == 1) {
			return it->first;
		}
		it++;
	}
}
int newUniqueMethod(int *arr, int size) {
	sort(arr,arr+size);
    for(int i = 0; i < size; i++) {
        if(arr[i] == arr[i+1]) {
            i++;
            continue;
        }
        return arr[i];
    }
}
int main() {
	ap();
	int *arr;
	int size;
	cin >> size;
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << newUniqueMethod(arr, size) << endl;
	return 0;
}