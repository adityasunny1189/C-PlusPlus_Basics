#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicates(int *arr, int size) {
	vector<int> output;
	unordered_map<int, bool> seen;
	for(int i = 0; i < size; i++) {
		if(seen.count(arr[i]) > 0) {
			continue;
		}
		seen[arr[i]] = true;
		output.push_back(arr[i]);
	}
	return output;
}

int main() {
	cout << "Hello World" << endl;
	int arr[10] = {1, 2, 3, 2, 1, 5, 4, 3, 1, 6};
	vector<int> output = removeDuplicates(arr, 10);
	cout << "Vector Content: ";
	for(int i = 0; i < output.size(); i++) {
		cout << output.at(i) << " ";
	}
	cout << endl;
}