#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin >> n;
    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            if(j == i || j == 1) {
                cout << "1";
            }
            else {
              cout << "2";
            }
            j++;
        }
        i++;
        cout << endl;
    }
}
