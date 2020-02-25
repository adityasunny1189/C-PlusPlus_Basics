#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n;
    cin >> n;
    int i = n;
    while(i >= 1) {
        int j = 1;
		while(j <= i) {
			cout << j;
			j++;
		}
		int k = i;
		while(k < n) {
			cout << "**";
			k++;
		}
		int l = i;
		while(l > 0) {
			cout << l;
			l--;
		}
		cout << endl;
		i--;
    }
}
