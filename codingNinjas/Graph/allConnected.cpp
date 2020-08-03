#include<bits/stdc++.h>
using namespace std;
void dfs(int **edges, int n, int sv, int* visited, int* ans) {
    visited[sv] = 1;
    ans[sv] = 1;
    for(int i = 0; i < n; i++) {
        if(n == sv) {
            continue;
        }
        if(edges[sv][i] && !visited[i]) {
            dfs(edges, n, i, visited, ans);
        }
    }
}
void dfsComplete(int **edges, int v, int sv, int *visited) {
    for(int i = 0; i < v; i++) {
        if(!visited[i]) {
            int  *arr = new int[v];
            for(int i = 0; i < v; i++) {
                arr[i] = 0;
            }
            dfs(edges, v, i, visited, arr);
            for(int j = 0; j < v; j++) {
                if(arr[j]) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
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
    
    int*visited = new int[v];
    for(int i = 0; i < v; i++) {
        visited[i] = 0;
    }
    
    dfsComplete(edges, v, 0, visited);
}
