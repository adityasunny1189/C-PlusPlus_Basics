#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isLeapYear(int year) {
    if(year > 1918) {
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            return true;
        }
    } else {
        if(year % 4 == 0) {
            return true;
        }
    }
    return false;
}
int main() {
    int year;
    cin >> year;
    if(year == 1918) {
        cout << "26.09." << year << endl;
        return 0;
    }
    if(isLeapYear(year)) {
        cout << "12.09." << year << endl;
    } else {
        cout << "13.09." << year << endl;
    }
}