#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e3+10;

int main(){
    int n;
    cin >> n;
    vector<string> nomes = {"ALAN", "BETO", "CLOE", "DUDA", "ELON", "FANY", "GABY", "HUGO", "IRMA", "JOSE"};
    vector<int> valores = {1000, 600, 480, 240, 80, 60, 20, 8, 5, 1};
    string s = "";
    int j = 0;
    while (n > 0){
        for (int i = j; i < 10; i++){
            if (valores[i] == n){
                n -= valores[i];
                s += nomes[i];
                j = i;
                break;
            }
        }
    }
    cout << s << '\n';
    return 0;
}