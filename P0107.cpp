#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;

const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    vector<int> val(10);
    for (int i = 0; i < 10; i++){
        cin >> val[i];
    }
    int soma = 0;
    for (int i = 1; i < 9; i++){
        soma += val[i-1] + val[i] + val[i+1];
    }
    soma += val[8] + val[9] + val[0];
    soma += val[9] + val[0] + val[1];
    cout << soma << '\n';
    return 0;
}