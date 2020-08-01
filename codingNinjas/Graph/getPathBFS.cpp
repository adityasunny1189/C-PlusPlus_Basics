#include<bits/stdc++.h>
using namespace std;
bool getPathBFS(int **edges, int n, int s, int e, int *visited) {
	visited[s] = 1;
	if(s == e) {
		return true;
	}
	queue<int> pendingNodes;
	pendingNodes.push(s);
	while(pendingNodes.size() > 0) {
		int front = pendingNodes.front();
		pendingNodes.pop();
		visited[front] = 1;
		for(int i = 0; i < n; i++) {
			if(i == front) {
				continue;
			}
			if(edges[front][i] == 1 && !visited[i]) {
				int smallAns = getPathBFS(edges, n, i, e, visited);
				if(smallAns) {
					cout << i << " ";
					pendingNodes.push(i);
					return true;
				}
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
	bool ans = getPathBFS(edges, v, v1, v2, visited);
	if(ans) {
		cout << v1 << " ";
	}
	
	cout << endl;
}