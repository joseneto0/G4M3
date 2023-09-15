#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> visitados(n, 0);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        visitados[v[i]]++;
    }
    int menor = k;
    for (int i = 0; i < n; i++){
        if (n % k == 0){
            if (visitados[i] < k && i < menor){
                menor = i;
            } 
        }
        else {
            if (visitados[i] <= (n-k) && i < menor){
                menor = i;
            }
        }

    }
    cout << menor << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; while(t--) { solve(); }
    return 0;
}