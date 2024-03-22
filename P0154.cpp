#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> ans;

void dfs(int u){
    vis[u] = true;
    for (int x: adj[u]){
        if (!vis[x]){
            dfs(x);
        }
    }
    ans.push_back(u);
}

void topo_sort(int n){
    vis.assign(n+1, false);
    ans.clear();
    for (int i = 1; i <= n; i++){
        if (!vis[i]){
            cout << i << " ";
            dfs(i);
        }
    }
    reverse(all(ans));
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, m, x, y;
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    ans.assign(n+1, 0);
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    topo_sort(n);
    return 0;
}