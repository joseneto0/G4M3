#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int lcm(int a, int b){
    return a * (b / __gcd(a, b));
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, c;
    cin >> n;
    set<int> r;
    for (int _ = 0; _ < n; _++){
        cin >> c;
        vector<int> a(c);
        for (int i = 0; i < c; i++){
            cin >> a[i];
        }
        int menor = a[0];
        for (int i = 0; i < c-1; i++){
            menor = lcm(menor, a[i+1]);
        }
        r.insert(menor);
    }
    for (auto x: r){
        cout << x << '\n';
    }
    return 0;
}