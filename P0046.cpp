#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, m, q, v, cont=0;
    cin >> n >> m;
    vector<int> numEstrelas;
    vector<int> valorNutritivo;
    vector<int> valorNutritivo2;
    for (int i = 0; i < n; i++){
        cin >> q >> v;
        numEstrelas.push_back(q);
        valorNutritivo.push_back(v);
    }
	for (int i = 0; i < numEstrelas.size(); i++){
		if (numEstrelas[i] > 1){
			while (numEstrelas[i] != 0){
				valorNutritivo2.push_back(valorNutritivo[i]);
				numEstrelas[i] -= 1;
			}
		} else {
			valorNutritivo2.push_back(valorNutritivo[i]);
		}
	}
	sort(valorNutritivo2.begin(), valorNutritivo2.end());
    reverse(valorNutritivo2.begin(), valorNutritivo2.end());
	vector<int> numEstrelas2(valorNutritivo2.size());
	for (int i = 0; i < valorNutritivo2.size(); i++){
		numEstrelas2[i] = 1;
	}
	sort(numEstrelas2.begin(), numEstrelas2.end());
	reverse(numEstrelas2.begin(), numEstrelas2.end());
	int i = 0;
	while (m > 0){
		cont += valorNutritivo2[i];
		m--;
		i++;
	}
    cout << cont << '\n';
    return 0;
}