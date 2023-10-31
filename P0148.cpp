#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    int maior = 0;
    vector<int> a(n), preffix(n), suffix(n);
    for (int i = 0; i < n; i++){ 
        cin >> a[i]; 
        maior = max(maior, a[i]);
        preffix[i] = maior;
    }
    maior = 0;
    for (int i = n-1; i >= 0; i--){
        maior = max(maior, a[i]);
        suffix[i] = maior;
    }
    int aux;
    for (int i = 0; i < q; i++){
        cin >> aux;
        aux--;
        if (aux == n-1){
            cout << preffix[aux] << "\n";
        } else if (aux == 0){
            cout << suffix[aux] << "\n";
        } else {
            cout << preffix[aux-1] + suffix[aux+1] << "\n"; 
        }
    }
    return 0;
}