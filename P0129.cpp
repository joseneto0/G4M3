#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, qntdRA = 0, qntdRB = 0, qntdRC = 0, qntdBA= 0, qntdBB = 0, qntdBC = 0;
    string s;
    cin >> a >> b >> c;
    for (int j = 0; j < a; j++){
        cin >> s;
        if (s[1] == 'R'){
            qntdRA++;
        } else {
            qntdBA++;
        }
    }
    for (int j = 0; j < b; j++){
        cin >> s;
        if (s[1] == 'R'){
            qntdRB++;
        } else {
            qntdBB++;
        }
    }
    for (int j = 0; j < c; j++){
        cin >> s;
        if (s[1] == 'R'){
            qntdRC++;
        } else {
            qntdBC++;
        }
    }
    int num = qntdRA * qntdRB * qntdRC + qntdBA * qntdBB * qntdBC;
    int den = a * b * c;
    if (num % den == 0){
        cout << num / den << '\n';
    } else {
        int m = __gcd(num, den);
        cout << num / m << "/" << den / m << '\n';
    }
    return 0;
}