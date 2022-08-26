#include <bits/stdc++.h>

using namespace std;

int main(void){
    int T, N, cont=0;
    cin >> T >> N;
    vector<int> vetor(N);
    vector<int> cidades_acessiveis;
    for (int i = 0; i < T; i++){
        for (int j = 0; j < N; j++){
            cin >> vetor[j];
        }
        for (int j = 1; j < N; j++){
            int conta = vetor[0] - vetor[j];
            if (conta <= 2 && conta >= 0){
                cont++;
                cidades_acessiveis.push_back(vetor[j]);
                vetor[j] = -100;

            }
        }
        int tamanho = cidades_acessiveis.size();
        int j = 0;
        while (tamanho > 0){
            for (int k = 1; k < N; k++){
                int conta = cidades_acessiveis[j] - vetor[k];
                if (conta <= 2 && conta >= 0){
                    cont++;
                    cidades_acessiveis.push_back(vetor[k]);
                    tamanho++;
                    vetor[k] = -100;
                }
            }
            tamanho--;
            j++;
        }
        cout << cont << '\n';
        cont = 0;
        cidades_acessiveis.clear();
    }
    return 0;
}