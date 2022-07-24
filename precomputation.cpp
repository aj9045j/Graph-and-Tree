#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector <int> g[N];
int subtre_sum[N];
int even_ct[N];
void dfs(int vertex, int p = -1) {
	subtre_sum[vertex] += vertex;
	if (vertex % 2 == 0) even_ct[vertex]++;
	for (int child : g[vertex]) {

		if (child == p) continue;
		dfs(child, vertex);
		subtre_sum[vertex] += subtre_sum[child];
		even_ct[vertex] += even_ct[child];
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
	int q;
	cin >> q;
	while (q--) {
		int v;
		cin >> v;
		cout << subtre_sum[v] << even_ct[v] << endl;
	}
}
