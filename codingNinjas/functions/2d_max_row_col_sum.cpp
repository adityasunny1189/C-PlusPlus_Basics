#include<iostream>
using namespace std;
// void findLargest(int arr[][1000], int row, int col) {
//     int rowN, colN, rowS = 0, colS = 0;
//     int sum;
//     for(int i = 0; i < row; i++) {
//         int sum = 0;
//         for(int j = 0; j < col; j++) {
//             sum += arr[i][j];
//         }
//         if(rowS < sum) {
//             rowS = sum;
//             rowN = i;
//         }
//     }
//     for(int i = 0; i < row; i++) {
//         int sum = 0;
//         for(int j = 0; j < col; j++) {
//             sum += arr[j][i];
//         }
//         if(colS < sum) {
//             colS = sum;
//             colN = i;
//         }
//     }
//     if(rowS >= colS) {
//         cout << "row" << " " << rowN << " " << rowS << endl;
//     }
//     else {
//         cout << "column" << " " << colN << " " << colS << endl;
//     }
// }

int main() {
	int arr[10][10];
	int row, col;
	cin >> row >> col;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}
	int rowN, colN, rowS = 0, colS = 0;
    int sum;
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        if(rowS < sum) {
            rowS = sum;
            rowN = i;
        }
    }
    for(int i = 0; i < col; i++) {
        int sum = 0;
        for(int j = 0; j < row; j++) {
            sum += arr[i][j];
        }
        if(colS < sum) {
            colS = sum;
            colN = i;
        }
    }
    if(rowS >= colS) {
        cout << "row" << " " << rowN << " " << rowS << endl;
    }
    else {
        cout << "column" << " " << colN << " " << colS << endl;
    }
	// findLargest(arr, row, col);
}
