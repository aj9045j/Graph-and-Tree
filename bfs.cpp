#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];
int lvl[N];
void bfs(int source) {
	queue<int> q;
	q.push(source);
	vis[source] = 1;

	while (!q.empty()) {
		int cur_v = q.front();
		q.pop();
		cout << cur_v << " ";
		for (int child : g[cur_v]) {
			if (!vis[child]) {
				q.push(child);
				vis[child] = 1;
				lvl[child] = lvl[cur_v] + 1;

			}
		}
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
	bfs(1);
	cout << "level of nodes\n";
	for (int i = 1; i <= n; ++i)
	{
		cout << endl << i << ":" << lvl[i];
	}


}