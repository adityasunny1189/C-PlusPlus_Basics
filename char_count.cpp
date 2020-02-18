#include<iostream>
using namespace std;

int main(){
    int count_ch = 0;
    int count_no = 0;
    int count_sp = 0;
    char ch;
    ch = cin.get();
    while(ch != '$') {
        if(ch >= 48 && ch <= 58) {
            count_no++;
        }
        else if(ch >= 97 && ch <= 122) {
            count_ch++;
        }
        else {
            count_sp++;
        }
        ch = cin.get();
    }
    cout << count_ch << " " << count_no << " " << count_sp << endl;
}
