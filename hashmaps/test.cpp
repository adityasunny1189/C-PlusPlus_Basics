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
    ap();
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    while(n--) {
        int c;
        cin >> c;
        int no;
        switch(c) {
            case 1: cin >> no;
                    pq.push(no);
                    break;

            case 2: cin >> no;
                    pq.pop();
                    break;

            case 3: cout << pq.top() << endl;
        }
    }
}
