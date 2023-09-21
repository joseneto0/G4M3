#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, andressa = 0, bianca = 0, Awin = false, Bwin = false;
    char aux;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (i % 2 == 0){
            if (aux == 'A'){
                andressa = 0;
            } else if (aux == 'C' && !Bwin) Awin = true;
            else {
                if (aux == 'X' || aux == 'J' || aux == 'Q' || aux == 'K') andressa += 10;
                else andressa += int(aux);
            }
        } else {
            if (aux == 'A'){
                bianca = 0;
            } else if (aux == 'C' && !Awin) Bwin = true;
            else {
                if (aux == 'X' || aux == 'J' || aux == 'Q' || aux == 'K') bianca += 10;
                else bianca += int(aux);
            }
        }
    }
    if (Awin){
        cout << "ANDRESSA" << '\n';
    } else if (Bwin){
        cout << "BIANCA" << '\n';
    } else {
        if (andressa > bianca) cout << "ANDRESSA" << '\n';
        else if (bianca > andressa) cout << "BIANCA" << '\n';
        else cout << "EMPATE" << '\n';
    }
    return 0;
}