#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    double a, b, soma;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        soma += a * b;
    }
    cout << soma << '\n';
    return 0;
}