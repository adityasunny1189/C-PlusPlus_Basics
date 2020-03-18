#include<iostream>
using namespace std;
int main() {
	int row;
	cin >> row;
	int col;
	cin >> col;
	int **arr = new int* [row];
	for(int i = 0; i < row; i++) {
		arr[i] = new int[col];
		for(int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
