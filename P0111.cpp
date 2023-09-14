#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n; 
	ll e=1, d=1;
	cin >> n;
	for(int i = 0; i < n; i++){
		if (i%2==0) e*=2;
		else d*=2;
	}
	cout << e*d << '\n';
	return 0;
}
