#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, aux;
    cin >> n;
    vector<int> a(n+1, 0);
    bool perdeu = false;
    for (int i = 1; i <= n; i++){
        cin >> aux;
        a[aux]++;
        if (a[aux] > 1 || aux == i){
            perdeu = true;
        } 
    }
    if (perdeu) cout << "N" << '\n';
    else cout << "S" << '\n';
    return 0;
}