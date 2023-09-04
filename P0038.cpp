#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    for (int _ = 1; _ <= t; _++){
        int n, v;
        cin >> n >> v;
        vector<int> val(n);
        int soma = 0;
        for (int i = 0; i < n; i++){
            cin >> val[i];
            soma += val[i];
        }
        int resp = soma + v;
        if (resp <= 0){
            while (resp <= 0){
                resp += n;
            }
        } else {
            while (resp > n){
                resp -= n;
            }
        }
        cout << "Caso " << _ << ": " << resp << '\n';
    }
    return 0;
}