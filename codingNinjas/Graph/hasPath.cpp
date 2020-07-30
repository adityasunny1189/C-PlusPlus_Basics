#include<iostream>
using namespace std;
bool hasPath(int **edges, int n, int s, int e, int *visited) {
	visited[s] = 1;
    if(s == e) {
        return true;
    }
    for(int i = 0; i < n; i++) {
        if(i == s) {
            continue;
        }
        if(edges[s][i] == 1 && !visited[i]) {
            bool smallAns = hasPath(edges, n, i, e, visited);
            if(smallAns) {
                return true;
            }
        } 
    }
    return false;
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
        int first, second;
        cin >> first >> second;
        edges[first][second] = 1;
        edges[second][first] = 1;
    }
    
    int s, t;
    cin >> s >> t;
    int *visited = new int[v];
    for(int i = 0; i < v; i++) {
        visited[i] = 0;
    }
    if(hasPath(edges, v, s, t, visited))
    	cout << "true" << endl;
    else 
    	cout << "false" << endl;
}