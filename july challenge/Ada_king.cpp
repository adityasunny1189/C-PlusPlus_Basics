#include<bits/stdc++.h>
using namespace std;
void ap() 
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}
int main() {
	ap();
    int t;
    cin >> t;
    while(t--) {
        char chessBoard[8][8];
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                chessBoard[i][j] = '_';
            }
        }
        int pos;
        cin >> pos;
        int kingPos = 0;
        chessBoard[0][0] = '.';
        int x = 0;
        int y = 1;
        while(kingPos != pos - 1) {
            chessBoard[x][y] = '.';
            kingPos++;
            if(y < 7) {
                y++;
            } else {
                x++;
                y = 0;
            }
        }
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(chessBoard[i][j] == '.') {
                    if(chessBoard[(i+1) % 8][j] != '.') {
                        chessBoard[(i+1) % 8][j] = 'X';
                    }
                    if(chessBoard[i][(j + 1) % 8] != '.') {
                        chessBoard[i][(j + 1) % 8] = 'X';
                    }
                    if(chessBoard[(i+1) % 8][(j + 1) % 8] != '.') {
                        chessBoard[(i+1) % 8][(j + 1) % 8] = 'X';
                    }
                }
            }
        }
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(chessBoard[i][j] == '_') {
                    chessBoard[i][j] = '.';
                }
            }
        }
        chessBoard[0][0] = 'O';
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                cout << chessBoard[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}