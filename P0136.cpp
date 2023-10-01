#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int soma = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        soma += a[i];
    }
    int t = 0, s2 = 0, tMenor = 0;  
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            s2 += a[j];
            t++;
            if (s2 == soma){
                if (tMenor == 0) tMenor = t; 
                else if (t <= tMenor) tMenor = t;
            }
        }
        s2 = 0;
        t = 0;
    }
    cout << soma << ' ' << tMenor << '\n';
    return 0;
}