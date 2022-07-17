#include<bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
bool vis[n];
vector <int> g[n];
void dfs(int vertex) {
  cout << L vertex << endl;
  vis[vertex] = true;
  for (int child : g[vertex]) {
    cout << vertex << ":" << child << endl;
    if (vis[child]) continue;

    dfs(child);
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
  dfs(1);

}
