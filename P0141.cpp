#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    vector<int> a(3);
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (auto x: a){
        cout << x << '\n';
    }
    return 0;
}