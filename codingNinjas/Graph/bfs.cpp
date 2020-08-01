#include<iostream>
#include<queue>
using namespace std;
void print(int ** edges, int n, int sv) {
    queue<int> q;
    int *visited = new int[n];
    for(int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    q.push(sv);
    visited[sv] = 1;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for(int i = 0; i < n; i++) {
            if(i == cur) {
                continue;
            }
            if(edges[cur][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
    delete [] visited;
}
int main() {
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
    print(edges, v, 0);
}


