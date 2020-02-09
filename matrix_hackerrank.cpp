#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    int a = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) {
                a += arr[i][j];
            }
        }
    }
    int b = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i + j == n + 1) {
                b += arr[i][j];
            }
        }
    }
    if(a > b) {
        cout << (a - b);
    }
    else {
        cout << (b - a);
    }
}
