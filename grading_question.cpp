#include<iostream>
using namespace std;
int checkGrade(int no) {
    if(no < 38 || no % 5 == 0) {
        return no;
    }
    else {
        int rem = no % 5;
        if(rem >= 3) {
            return (no + 5 - rem);
        }
        else {
            return no;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[10000];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << checkGrade(arr[i]) << endl;
    }
}
