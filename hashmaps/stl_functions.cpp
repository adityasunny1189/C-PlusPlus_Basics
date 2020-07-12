// #include<bits/stdc++.h>
// using namespace std;
// void ap() 
// {
//   #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//   #endif
// }
// int main() {
// 	ap();
// 	int arr[] = {3,2,5,1,9,4};
// 	sort(arr, arr+6);
// 	for(int i = 0; i < 6; i++) {
// 		cout << arr[i] << " ";
// 	}
// 	// cout << endl;
// 	// sort(arr, arr + 6, greater<int>());
// 	// for(int i = 0; i < 6; i++) {
// 	// 	cout << arr[i] << " ";
// 	// }
// 	cout << endl;
// 	cout << __gcd(12, 9) << endl;
// 	cout << lower_bound(arr, arr + 6, 5) - arr<< endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void ap() 
// {
//   #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//   #endif
// }
// int fun(int a, int b) {
// 	return (a > b ? (a - b - 1) : (b - a - 1));
// }
// int main() {
// 	ap();
// 	int t;
// 	cin >> t;
// 	while(t--) {
// 		int n;
// 		cin >> n;
// 		int arr[n];
// 		for(int i = 0; i < n; i++) {
// 			cin >> arr[i];
// 		}
// 		int stringToSkip = (arr[0] - 1);
// 		for(int i = 0; i < n - 1; i++) {
// 			stringToSkip += fun(arr[i], arr[i + 1]);
// 		}
// 		cout << stringToSkip << endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// void ap() 
// {
//   #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//   #endif
// }
// int main() {
// 	ap();
//     int t;
//     cin >> t;
//     while(t--) {
//         char chessBoard[8][8];
//         for(int i = 0; i < 8; i++) {
//             for(int j = 0; j < 8; j++) {
//                 chessBoard[i][j] = '_';
//             }
//         }
//         int pos;
//         cin >> pos;
//         int kingPos = 0;
//         chessBoard[0][0] = '.';
//         int x = 0;
//         int y = 1;
//         while(kingPos != pos - 1) {
//             chessBoard[x][y] = '.';
//             kingPos++;
//             if(y < 7) {
//                 y++;
//             } else {
//                 x++;
//                 y = 0;
//             }
//         }
//         for(int i = 0; i < 8; i++) {
//             for(int j = 0; j < 8; j++) {
//                 if(chessBoard[i][j] == '.') {
//                     if(chessBoard[(i+1) % 8][j] != '.') {
//                         chessBoard[(i+1) % 8][j] = 'X';
//                     }
//                     if(chessBoard[i][(j + 1) % 8] != '.') {
//                         chessBoard[i][(j + 1) % 8] = 'X';
//                     }
//                     if(chessBoard[(i+1) % 8][(j + 1) % 8] != '.') {
//                         chessBoard[(i+1) % 8][(j + 1) % 8] = 'X';
//                     }
//                 }
//             }
//         }
//         for(int i = 0; i < 8; i++) {
//             for(int j = 0; j < 8; j++) {
//                 if(chessBoard[i][j] == '_') {
//                     chessBoard[i][j] = '.';
//                 }
//             }
//         }
//         chessBoard[0][0] = 'O';
//         for(int i = 0; i < 8; i++) {
//             for(int j = 0; j < 8; j++) {
//                 cout << chessBoard[i][j];
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
// }

// #include<bits/stdc++.h>
// #define int long long
// using namespace std;
// void ap() 
// {
//   #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//   #endif
// }
// int32_t main() {
// 	ap();
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> v;
//         for(int i = 0; i < (4*n - 1); i++) {
//             int f, s;
//             cin >> f >> s;
//             pair<int, int> p;
//             p.first = f;
//             p.second = s;
//             v.push_back(p);
//         }
//         for(int i = 0; i < (4*n - 1); i++) {
//             pair<int, int> p;
//             p = v.at(i);
//             cout << p.first << " " << p.second << endl;
//         }
//     }
// }

#include<bits/stdc++.h>
#define int long long
using namespace std;
void ap() 
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}
int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        for(int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            a.push_back(ele);
        }
        for(int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            b.push_back(ele);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = 0;
        int notPossible = false;
        for(int i = 0; i < n;) {
            if(a[i] == b[i]) {
            	i++;
                continue;
            }
            else if(i == n - 1) {
                notPossible = true;
                break;
            }
            else {
                int temp = a[i];
                a.at(i) = b[i];
                b.at(i) = temp;
                ans++;
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
                i = 0;
            }
        }
        if(notPossible) {
            cout << "-1" << endl;
        }
        else {
            cout << ans << endl;
        }
    }
}