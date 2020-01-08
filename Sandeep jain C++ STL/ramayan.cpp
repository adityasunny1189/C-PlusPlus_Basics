#include<bits/stdc++.h>
using namespace std;
void findJumps(int N, int X) {
    int i = 0, j = 0, y = 0, min = 0;
    if(X == 1)
        cout << 0;
    else if(X == N) {
        cout << 0;
    }
    else {
        if(N % 2 == 0) {
            if(X % 2 == 0) {
                i = X/2;
                j = N/2;
                y = j - i;
            }
            else {
                i = (X - 1)/2;
                j = N/2;
                y = j - i;
            }
        }
        else {
            if(X % 2 == 0) {
                i = X/2;
                j = (N - 1)/2;
                y = j - i;
            }
            else {
                i = (X - 1)/2;
                j = (N - 1)/2;
                y = j - i;
            }
        }
        if(y > i)
            min = i;
        else if(y == i)
            min = i;
        else
            min = y;
        cout << min;
    }
    cout << endl;
}

int main() {
  int n ;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int N, X;
    cin >> N >> X;
    findJumps(N,X);
  }
  return 0;
}
