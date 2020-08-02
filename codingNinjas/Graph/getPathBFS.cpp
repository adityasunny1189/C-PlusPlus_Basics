#include<bits/stdc++.h>
using namespace std;
void getPathBFS(int **edges, int n, int s, int e, int *visited) {
	unordered_map<int, int> ourmap;
    queue<int> pending_nodes;
    pending_nodes.push(s);
    ourmap[s] = 1;
    visited[s] = 1;
    while(!pending_nodes.empty()) {
    	int front = pending_nodes.front();
    	pending_nodes.pop();
    	for(int i = 0; i < n; i++) {
    		if(i == front) {
    			continue;
    		}
    		if(edges[front][i] && !visited[i]) {
    			pending_nodes.push(i);
    			ourmap[i] = front;
    			visited[i] = 1;
    		}
    	}
    }
    if(ourmap.count(ourmap[e]) > 0) {
    	cout << e << " ";
    	for(int i = e; ourmap[i] != s; i = ourmap[i]) {
    		cout << ourmap[i] << " ";
    	}
        cout << s << " ";
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

	int v1, v2;
	cin >> v1 >> v2;

	int *visited = new int[v];
	for(int i = 0; i < v; i++) {
		visited[i] = 0;
	}
	getPathBFS(edges, v, v1, v2, visited);
}