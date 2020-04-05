// #include<iostream>
// using namespace std;
// void decrease(int arr[], int size) {
// 	for(int i = 0; i < size; i++) {
// 		arr[i]--;
// 	}
// }
// void print(int arr[], int size) {
// 	for(int i = 0; i < size; i++) {
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// }
// int main() {
// 	int size;
// 	cin >> size;
// 	int *arr = new int[size];
// 	for(int i = 0; i < size; i++) {
// 		cin >> arr[i];
// 	}
// 	print(arr, size);
// 	decrease(arr, size);
// 	print(arr, size);
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> v;
	int size ;
	cin >> size;
	for(int i = 0; i < size; i++) {
		int no;
		cin >> no;
		v.push_back(no);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < size; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
