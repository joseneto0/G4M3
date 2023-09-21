#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, q, aux, cont=0;
    cin >> n >> q;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux < q){
            cont += q - aux;
        }
    }
    cout << cont << '\n';
    return 0;
}