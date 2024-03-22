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
    int n, a, b;
    cin >> n;
    grafo.resize(n+1, vector<int>(n+1));
    visitados.assign(n+1, false);
    for (int i = 0; i < n-1; i++){
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
    if (cont == 1){
        cout << "YES" << "\n";
    }else {
        cout << "NO" << "\n";
    }
    return 0;
}