#include <bits/stdc++.h>

using namespace std;

int mochila(vector<int>qtdEstrelas, vector<int> valorEstrelas, int qtdObjetos, int valorMochila, int cont){
    int x[qtdObjetos];
    for (int i = qtdObjetos; i > 0; i--){
        if (qtdEstrelas[i] <= valorMochila){
            x[i] = 1;
            valorMochila -= qtdEstrelas[i];
        } else {
            x[i] = valorMochila / (qtdEstrelas[i]);
            valorMochila = 0;
        }
    }
    return x[cont];
}

int main(void){
    int n, m, q, v, cont=0, soma=0;
    cin >> n >> m;
    vector<int> numEstrelas;
    vector<int> valorNutritivo;
    for (int i = 0; i < n; i++){
        cin >> q >> v;
        numEstrelas.push_back(q);
        valorNutritivo.push_back(v);
    }
    for (int i = 0; i < n; i++){
        soma += mochila(numEstrelas, valorNutritivo, n, m, cont);
        cout << soma << endl;
        cont++;
    }
    cout << soma << endl;
    return 0;
}