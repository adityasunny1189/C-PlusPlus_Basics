#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a;
    cin >> b;
    for(int i = a; i <= b; i++) {
        if(i > 9) {
            if(i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
        else {
            switch (i) {
                case 1: cout << "one" << endl;
                case 2: cout << "two" << endl;
                case 3: cout << "three" << endl;
                case 4: cout << "four" << endl;
                case 5: cout << "five" << endl;
                case 6: cout << "six" << endl;
                case 7: cout << "seven" << endl;
                case 8: cout << "eight" << endl;
                case 9: cout << "nine" << endl;
            }
        }
    }

    return 0;
}
