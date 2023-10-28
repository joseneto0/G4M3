#include <bits/stdc++.h>

using namespace std;

#define forcin for (int i = 0; i < n; i++){ cin >> a[i]; }

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    forcin;
    int cont1 = 0, maior = 0, x = 0;
    for (int i = 0; i < (1 << n); i++){
        for (int bit = 0; bit < n; bit++){
            if ((i & (1 << bit)) != 0){
                x ^= a[bit];
                cont1++;
            }
        }
        if (x == 0) maior = max(cont1, maior);
        cont1 = 0;
        x = 0;
    }
    cout << maior << "\n";
    return 0;
}