#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	if (n == 1)
		cout << 1 << '\n';
	else
	{
		vector<vector<int>> matriz(n, vector<int>(n));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				matriz[i][j] = 0;
			}
		}
		int cont = 1;
		int linha, coluna;
		if (n % 2 == 0) {
			linha = n / 2;
			coluna = n / 2 - 1;
		}
		else {
			linha = n / 2;
			coluna = n / 2;
		}
		int ind = 1;
		int colunaA = coluna, linhaA = linha;

		while (true)
		{
			if (cont >= n*n){
				break;
			}
			for (int i = colunaA; i <= coluna+ind; i++){
				matriz[linhaA][i] = cont;
				cont++;
				colunaA = i;
			}
			cont--;
			if (cont >= n*n){
				break;
			}
			for (int i = linhaA; i >= linha-ind; i--){
				matriz[i][colunaA] = cont;
				cont++;
				linhaA = i;
			}
			cont--;
			if (cont >= n*n){
				break;
			}
			for (int i = colunaA; i >= coluna-ind; i--){
				matriz[linhaA][i] = cont;
				cont++;
				colunaA = i;
			}
			cont--;
			if (cont >= n*n){
				break;
			}
			for (int i = linhaA; i <= linha+ind; i++){
				matriz[i][colunaA] = cont;
				cont++;
				linhaA = i;
			}
			cont--;
			if (cont >= n*n){
				break;
			}
			ind++;
		
		}

		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < n; j++)
			{
				cout << matriz[i][j] << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}
