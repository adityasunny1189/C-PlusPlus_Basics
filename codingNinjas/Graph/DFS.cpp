#include<iostream>
using namespace std;

void print(int **edges, int n, int sv, int *visited_nodes) {
	cout << sv << endl;
	visited_nodes[sv] = 1;
	for(int i = 0; i < n; i++) {
		if(i == sv) {
			continue;
		}
		if(edges[sv][i] == 1) {
			if(!visited_nodes[i])
				print(edges, n, i, visited_nodes);
		}
	}
}

int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int n, e;
	cin >> n >> e;
	int **edges = new int*[n];
	for(int i = 0; i < n; i++) {
		edges[i] = new int[n];
		for(int j = 0; j < n; j++) {
			edges[i][j] = 0;
		}
	}
	for(int i = 0; i < e; i++) {
		int f, s;
		cin >> f >> s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}
	int *visited_nodes = new int[n];
	for(int i = 0; i < n; i++) {
		visited_nodes[i] = 0;
	}
	print(edges, n, 0, visited_nodes);
	for(int i = 0; i < n; i++) {
		delete [] edges[i];
	}
}