#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int d, q, x, y;
	cin >> d >> q;
	vector<vector<int>> matriz(d, vector<int> (d));
	for (int i = 0; i < d; i++){
		for (int j = 0; j < d; j++){
			matriz[i][j] = 0;
		}
	}
	bool a = false;
	for (int i = 0; i < q; i++){
		cin >> x >> y;
		matriz[x][y] = -1;
		if (!a){
			for (int j = x-1; j <= x + 1; j++){
				for (int k = y-1; k <= y+1; k++){
					if (j >= 0 && k >= 0 && j < d && k < d){
						if (matriz[j][k] != -1) matriz[j][k]++;
						if (matriz[j][k] >= 5) a = true;						
					}
				}
			}
		}
	}	
	if (!a) cout << "True" << '\n';
	else cout << "False" << '\n';
	return 0;
}
