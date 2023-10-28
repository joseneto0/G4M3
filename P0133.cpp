#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int aux = 1, e;
    vector<int> a;
    int soma = 0, somaUlt = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < aux; j++){
            cin >> e;
            a.push_back(e);
        }
        aux*=2;
    }
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}