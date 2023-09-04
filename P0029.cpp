#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, valor;
    cin >> n;
    string s;
    vector<int> num;
    for (int i = 0; i < n; i++){
        cin >> s;
        valor = (int)s[1];
        for (int j = 1; j <= 9; j++){
            if (s[0] == '+'){
                if (j + valor <= 10){
                    num.push_back(j);
                }
            } else {

            }
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; while(t--) { solve(); }
}