#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> matriz;
vector<vector<bool>> visitados;
int n;
int dfs(int i, int j){
    visitados[i][j] = true;
    int soma = matriz[i][j];
    if (i > 0 && matriz[i-1][j] != 0 && !visitados[i-1][j]){
      soma += dfs(i-1, j);
    }
    if (i < n - 1 && matriz[i+1][j] != 0 && !visitados[i+1][j]){
        soma += dfs(i+1, j);
    }
    if (j < 1 && matriz[i][j+1] != 0 && !visitados[i][j+1]){
        soma += dfs(i, j+1);
    }
    if (j > 0 && matriz[i][j-1] != 0 && !visitados[i][j-1]){
        soma += dfs(i, j-1);
    }
    return soma;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    matriz.resize(n, vector<int>(n));
    visitados.assign(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            cin >> matriz[i][j];
        }
    }
    int maior = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            if (matriz[i][j] == 0){
                maior = max(maior, dfs(i, j));
                visitados.assign(n, vector<bool>(n, false));
            }
        }
    }
    cout << maior << "\n";
    return 0;
}