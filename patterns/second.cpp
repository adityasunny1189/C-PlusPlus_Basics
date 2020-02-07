#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= n) {
        int k = i;
        int j = 1;
        while(k <= n) {
            cout << " " ;
            k++;
        }
        while(j <= i) {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    cout << "Pattern Over" << endl;
}
