#include<iostream>
#include<vector>
using namespace std;

bool getPath(int **edges, int n, int s, int e, int *visited) {
	visited[s] = 1;
	if(s == e) {
		return true;
	}
	for(int i = 0; i < n; i++) {
		if(i == s) {
			continue;
		}
		if(edges[s][i] == 1 && !visited[i]) {
			bool smallAns = getPath(edges, n, i, e, visited);
			if(smallAns) {
                cout << i << " ";
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
	vector<int> arr;
	bool ans = getPath(edges, v, v1, v2, visited);
	if(ans) {
		cout << v1 << " ";
	}
	
	cout << endl;
}