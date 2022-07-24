#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool vis[N];
vector <int> g[N];
void dfs(int vertex) {
  cout <<  vertex << endl;
  vis[vertex] = true;
  for (int child : g[vertex]) {
    cout << vertex << ":" << child << endl;
    if (vis[child]) continue;

    dfs(child);
  }
}
//n=nodes,e=edges
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

}
