//dfs in 2d matrix;
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int g[N][N];
bool vis[N];
void dfs(int vertex, int n) {
	cout << vertex << endl;
	vis[vertex] = 1;
	for (int i = 1; i <= n; i++) {
		if (vis[i]) continue;
		if (g[vertex][i] == 1) {
			cout << vertex << ":" << i << endl;
			dfs(i, n);
		}
	}

}
int main() {
	int n, e;
	cin >> n >> e;
	for (int i = 1; i <= e; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		g[v1][v2] = 1;
		g[v2][v1] = 1;

	}
	dfs(1, e);


}