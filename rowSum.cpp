#include<iostream>
using namespace std;


int main(){
    int row, col;
    cin >> row >> col;
    int arr[1000][1000];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    for(int j = 0; j < col; j++) {
		int rSum = 0;
        for(int i = 0; i < row; i++) {
            rSum += arr[i][j];
        }
		cout << rSum << " ";
    }


}
