#include<bits/stdc++.h>
using namespace std;
void ap() 
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}
void rotate(int *arr, int size, int len) {
	while(len--) {
		int cur = arr[0];
		for(int i = 0; i < size - 1; i++) {
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = cur;
	}
}
void rotateInLessTime(int *arr, int size, int len) {
	vector<int> v;
	for(int i = 0; i < len; i++) {
		v.push_back(arr[i]);
	}
	int lastIndex = 0;
	for(int i = 0; i < size - len; i++) {
		arr[i] = arr[i + len];
		lastIndex++;
	}
	int i = 0;
	while(v.size() != 0) {
		arr[lastIndex++] = v.at(i++);
		v.pop_back();
	}
}
int main() {
	ap();
	int *arr;
	int size, len;
	cin >> size >> len;
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	rotateInLessTime(arr, size, len);
	for(int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}