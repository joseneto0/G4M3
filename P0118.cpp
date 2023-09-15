#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const ll MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> palavras(n*m+1);
    vector<pair<int, int>> ind(27);
    string s;
    int cont = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> s;
            if (ind[s[0] - '0' - 49].first == 0) ind[s[0] - '0' - 49].first = i;
            ind[s[0] - '0' - 49].second = i;
            palavras[cont] = s;
            cont++;
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> s;
        int inicio = ind[s[0] - '0' - 49].first, fim = ind[s[0] - '0' - 49].second;

        if (inicio == fim){
            cout << inicio << '\n';
        } else {
       
            int start = inicio;
            int end = fim;
            while (start <= end){
                int meio = (start + end) / 2;
                if (palavras[meio*m] == s){
                    cout << meio << '\n';
                    break;
                } else if (s < palavras[meio*m]){
                    end = meio - 1;
                } else if (s > palavras[meio*m]){
                    start = meio + 1;
                }
            }
           
        }
    }
    
    return 0;
}