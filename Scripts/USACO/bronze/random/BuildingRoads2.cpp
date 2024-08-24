#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> adj;
vector<bool> visited;
vector<int> bridges;

void dfs(int vertex){
	visited[vertex] = true;
	for(int vertex_child : adj[vertex]){
		if(visited[vertex_child] == false){
			dfs(vertex_child);
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;

	visited.resize(n + 1, false);

	for(int i = 0; i < m; i++){
		int vertex1, vertex2;
		cin >> vertex1 >> vertex2;
		adj[vertex2].push_back(vertex1);
		adj[vertex1].push_back(vertex2);
	}

	for(int i = 1; i <= n; i++){
		if(visited[i] == false){
			bridges.push_back(i);
			dfs(i);
		}
	}

	cout << bridges.size() - 1 << endl;
	for(int i = 0; i < bridges.size() - 1; i++){
		cout << bridges[i] << " " << bridges[i + 1] << endl; 
	}
}
