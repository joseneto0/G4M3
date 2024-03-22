#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    set<int> oi = {1, 2, 3};
    cout << ((3 * (n * n) + n) / 2) % 7907 << '\n';
    return 0;
}

// não é o suficiente, o ll n pega todos os valores, fiz em python e deu certo :)