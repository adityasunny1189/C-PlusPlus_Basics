#include<iostream>
#include<queue>
using namespace std;
void print(int ** edges, int v, int sv, int *visited) {
    queue<int> q;
    q.push(sv);
    visited[sv] = 1;
    while(q.size() > 0) {
        int front = q.front();
        q.pop();
        cout << front << " ";
        for(int i = 0; i < v; i++) {
            if(i == front) {
                continue;
            }
            if(edges[front][i] == 1) {
                if(!visited[i]) {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int v, e;
    cin >> v >> e;
    int **edges = new int*[v];
    for(int i = 0; i < v; i++) {
        edges[i] = new int[v];
        for(int j = 0; j < v; j++) {
            edges[i][j] = 0;
        }
    }
    for(int i = 0; i < e; i++) {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    int *visited = new int[v];
    for(int i = 0; i < v; i++) {
        visited[i] = 0;
    }
    print(edges, v, 0, visited);
}