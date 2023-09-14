#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int l, r;
	cin >> l >> r;
	vector<int> a(8);
	for (int i = 0; i < 8; i++){
		cin >> a[i];
	}
	int cont=0;
	for (int x = l; x <= r; x++){
		for (int j = 0; j < 8; j++){
			if (a[j] == 1){
				if (j == 0) cout << x << ' ';
				else if (j == 1) cout << int(log2(x)) << ' ';
				else if (j == 2) cout << int(sqrt(x)) << ' ';
				else if (j == 3) cout << int(x * log2(x)) << ' ';
				else if (j == 4){
						if (x * x <= 9999999) cout << x * x << ' ';
						else cout << 9999999 << ' ';

				}
			   	else if (j == 5){
						if (x * x * x <= 9999999) cout << x * x * x << ' ';
						else cout << 9999999 << ' ';
				}
				else if (j == 6){ 
						if (pow(2, x) <= 9999999) cout << int(pow(2,x)) << ' ';
						else cout << 9999999 << ' ';
				}
				else if (j == 7){
						ll fac=1;
						for (int k = 2; k <= x; k++){
							fac*=k;
						}
						if (fac >= 9999999) fac = 9999999;
						cout << fac << ' ';
				}
			}
		}
		cout << '\n';
	}
	return 0;
}
