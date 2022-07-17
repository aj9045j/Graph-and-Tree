#include<bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
vector<int> g[n];
int vis[n];
int lvl[n];
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
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < 9; i++) {

		int v1, v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);

	}
	bfs(1);
	for (int i = 0; i < 9; ++i)
	{
		cout << endl << i << ":" << lvl[i];
	}


}