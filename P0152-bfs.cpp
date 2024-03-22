#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> grafo;
vector<bool> visitados;

void bfs(int i){
    queue<int> q;
    q.push(i);
    visitados[i] = true;
    while (!q.empty()){
        int f = q.front();
        q.pop();
        for (auto x = grafo[f].begin(); x != grafo[f].end(); x++){
            if (!visitados[*x]){
                q.push(*x);
                visitados[*x] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, m, a, b;
    cin >> n >> m;
    grafo.resize(n+1, vector<int>(n+1));
    visitados.assign(n, false);
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    int cont = 0;
    for (int i = 1; i <= n; i++){
        if (!visitados[i]){
            bfs(i);
            cont++;
        }
    }
    cout << cont << "\n";
    return 0;
}