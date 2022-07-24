//depth-->distance between node and root
//height-->maximum edges between leave node
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int height[N], depth[N];
vector <int> g[N];
void dfs(int vertex, int par = 0) {
	for (int child : g[vertex]) {

		if (child == par) continue;
		depth[child] = depth[vertex] + 1;
		height[vertex] = max(height[vertex], height[child] + 1);
		dfs(child, vertex);
	}
}
int main() {

	int n, e;

	cin >> n >> e;
	for (int i = 0; i < e; i++) {

		int v1, v2;



		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);

	}
	dfs(1);
	cout << "number" << " " << "height" << " " << "depth" << endl;
	for (int i = 1; i <= n; i++) {
		cout << i << " " << height[i] << " " << depth[i] << endl;

	}

}