#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int arr[100][100];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int rs, re, cs, ce, r = 0, c = 0;
	re = n;
	ce = m;
	for(rs = r; rs < re; rs++) {
		for(cs = c; cs < ce; cs++) {
			cout << arr[rs][cs] << " ";
		}
		rs = rs + 1;
		cs--;
		for(;rs < re; rs++) {
			cout << arr[rs][cs] << " ";
		}
		rs--;
		cs = cs - 1;
		for(;cs >= c; cs--) {
			cout << arr[rs][cs] << " ";
		}
		cs++;
		rs = rs - 1;
		for(;rs > r; rs--) {
			cout << arr[rs][cs] << " ";
		}
		ce--;
		re--;
		c++;
		r++;
	}
}
