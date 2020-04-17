#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i ++) {
        int score;
        cin >> score;
        v.push_back(score);
    }
    int lowSc;
    int highSc;
    lowSc = highSc = v[0];
    int countL, countH;
    countL = countH = 0;
    for(int i = 1; i < n; i++) {
        int currentScore = v[i];
        if(currentScore < lowSc) {
            countL++;
            lowSc = currentScore;
        }
        if(currentScore > highSc) {
            countH++;
            highSc = currentScore;
        }
    }
    cout << countH << " " << countL << endl;
}