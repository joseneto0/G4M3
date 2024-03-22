#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int l, c, qntdPar = 0, qntdImpar=0, aux;
    bool todosUm = true;
    cin >> l >> c;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cin >> aux;
            if (aux > 1){
                todosUm = false;
            }
            if (aux % 2 == 0 && aux != 0){
                qntdPar++;
            } else if (aux % 2 != 0 && aux != 0) {
                qntdImpar++;
            }
        }
    }
    int cont = 0;
    if (qntdImpar > 0 && qntdPar > 0 || qntdImpar > 0 && qntdPar == 0 && !todosUm){
        cont = 2;
    } else if (qntdPar > 0 && qntdImpar == 0 || qntdImpar > 0 && qntdPar == 0 && todosUm){
        cont = 1;
    } 
    cout << cont << "\n";
    return 0;
}