#include <iostream>
using namespace std;
int winner(int *arr, int n, int p) {
    int lowest_step = -1;
    int ans = -1;
    for(int i = 0; i < n; i++) {
        if(p % arr[i] == 0) {
            if(lowest_step != -1) {
                if(lowest_step > (p / arr[i])) {
                    lowest_step = p / arr[i];
                    ans = arr[i];
                }
                continue;
            }
            lowest_step = p / arr[i];
            ans = arr[i];
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, p;
        cin >> n >> p;
        int *arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = winner(arr, n, p);
        cout << ans << endl;
        delete [] arr;
    }
}