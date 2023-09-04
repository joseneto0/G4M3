#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; 
    cin >> n;
    vector<int> valores(n);
    int cont=0;
    bool a = false;
    for (int i = 0; i < n; i++){
        cin >> valores[i];
    }
    for (int i = n-1; i >=0; i--){
        if (valores[i] < 0 && !a){
            valores[i] *= -1;
            a = true;
        } else if (valores[i] < 0 && a){
            valores[i] *= 1;
            a = false;
        } else if (a){
            valores[i] *= -1;
        }
    }
    for (int i = 0; i < n; i++){
        cout << valores[i] << ' ';
    }
    cout << '\n';
    return 0;
}