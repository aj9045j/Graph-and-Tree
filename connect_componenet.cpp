#include<bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
bool vis[n];
vector <int> g[n];
vector<vector<int>> cc;
vector<int> current_cc;
void dfs(int vertex) {
	vis[vertex] = true;
	current_cc.push_back(vertex);
	for (int child : g[vertex]) {
		if (vis[child]) continue;
		dfs(child);
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
	int ct = 0;
	for (int i = 1; i <= n; ++i) {
		if (vis[i]) continue;
		current_cc.clear();
		dfs(i);
		cc.push_back(current_cc);
		ct++;
	}
	cout << "connect componenet=" << ct << endl;
	cout << cc.size() << endl;
	for (auto it : cc) {
		for (int vertex : it) {
			cout << vertex << " ";
		}
		cout << endl;
	}
}



