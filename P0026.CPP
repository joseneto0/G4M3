#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    string matriz[n];
    for (int i = 0; i < n; i++){
        cin >> matriz[i];
    }
    string aux[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            aux[i][j] = matriz[j][i];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << aux[i][j];
        }
        cout << '\n';
    }
    return 0;
}