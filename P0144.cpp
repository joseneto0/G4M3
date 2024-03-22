#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define lenLL(x) (ll)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#ifdef EBUG
	#include "bug.hpp"
#else
	#define bug(x) { ; }
	#define bug2(x,y) { ; }
	#define bug3(x,y,z) { ; }
	#define bugV(V) { ; }
	#define bugP(V) { ; }
	#define bugL() { ; }
#endif

int main(){
    clock_t start_time = clock();
    ios;
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l, r, x;
    for (int i = 0; i < q; i++){
        cin >> l >> r >> x;

    }
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}