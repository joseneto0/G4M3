#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int aux, qntdI = 0;
    for (int i = 0; i < 25; i++){
        cin >> aux;
        if (aux % 2 != 0) qntdI++;
    }
    if (qntdI >= 5){
        if (qntdI <= 20){
            if (qntdI % 2 != 0){
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        } else {
            if (qntdI == 21 || qntdI == 25){
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}