#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector <int> g[N];
int subtre_sum[N];
int val[N];
void dfs(int vertex, int p = -1) {
	subtre_sum[vertex] += val[vertex];
	for (int child : g[vertex]) {

		if (child == p) continue;
		dfs(child, vertex);
		subtre_sum[vertex] += subtre_sum[child];
	}
}
int main() {
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < m - 1; i++) {

		int v1, v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);

	}
	dfs(1, 0);
	long long ans = 0;
	for (int i = 2; i <= n; i++) {
		int part1 = subtre_sum[i];
		int part2 = subtre_sum[1] - part1;
		ans = max(ans, part1 * 1ll * part2);

	}
	cout << ans << endl;
}
