#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, t;
    cin >> n >> t;
    t *= 3;
    if (t < n) cout << "MANTER ABERTAS" << '\n';
    else cout << "FECHAR IMEDIATAMENTE" << '\n';
    return 0;
}