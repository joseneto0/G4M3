#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int cont = 0;
    if (a > b && a > c){
        cont=2;
        if (b > c){
            cont++;
        }
    } else if (b > a && b > c){
        cont++;
        if (a > c){
            cont++;
        }
    } else if (c > a && c > b){
        if (a > b){
            cont++;
        }
    }
    cout << cont << '\n';
    return 0;
}