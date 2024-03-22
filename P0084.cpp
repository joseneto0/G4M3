#include <bits/stdc++.h>

using namespace std;

#define ll long long in
#define all(x) x.begin(), x.end()

int l, c;
vector<vector<char>> matriz;
vector<vector<int>> matriz2;
vector<vector<bool>> vis;

int linha[] = {-1, 0, 1, 0};
int coluna[] = {0, 1, 0, -1};

bool isValid(int i, int j){
    if (i < 0 || i >= l || j < 0 || j >= c || vis[i][j] || matriz[i][j] == 'X') return false;
    return true;
}

void bfs(int i, int j){
    queue<tuple<int, int, int>> q;
    q.push(make_tuple(i, j, 0));
    vis[i][j] = true;
    while (!q.empty()){
        int x, y, z;
        tie(x, y, z) = q.front();
        q.pop();
        for (int m = 0; m < 4; m++){
            int x1 = x + linha[m];
            int y1 = y + coluna[m];
            if (isValid(x1, y1)){
                q.push(make_tuple(x1, y1, z+1));
                matriz2[x1][y1] = min(matriz2[x1][y1], z+1);
                vis[x1][y1] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> l >> c;
    matriz.assign(l, vector<char>(c, ' '));
    matriz2.assign(l, vector<int>(c, 1000));
    vis.assign(l,vector<bool>(c, false));
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matriz[i][j];
        }
    }
    int maiorDist = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (matriz[i][j] == 'X'){
                vis.assign(l, vector<bool>(c, false));
                bfs(i, j);
            } 
        }
    }
    int maior = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (matriz[i][j] != 'X'){
                maior = max(maior, matriz2[i][j]);
            }
        }
    }
    int qntd = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (matriz[i][j] != 'X' && matriz2[i][j] == maior){
                qntd++;
            }
        }
    }
    cout << maior << " " << qntd << "\n";
    return 0;
}