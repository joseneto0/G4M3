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

vector<vector<int>> adj;
vector<vector<bool>> vis(11, vector<bool>(11, false));
set<int> recebidos;
int n;

bool dfs(int x, int pai){
    recebidos.insert(x);
    if (len(recebidos) == n){
        recebidos.erase(x);
        if (!vis[x][pai]){
            return true;
        }
    }
    bool certo = false;
    for (auto &v: adj[x]){
        if (recebidos.find(v) != recebidos.end()){
            continue;
        }
        if (dfs(v, pai)){
            certo = true;
        }
        if (certo) break;
    }
    recebidos.erase(x);
    return certo;
}

int main(){
    clock_t start_time = clock();
    ios;
    int m, x, y;
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        vis[x][y] = true;
        vis[y][x] = true;
    }
    for (int i = 1; i <= n; i++){
        vis[i][i] = true;
        for (int j = 1; j <= n; j++){
            if (!vis[i][j]){
                adj[i].push_back(j);
            }
        }
    }
    bool achou = false;
    for (int i = 1; i <= n; i++){
        if (dfs(i, i)){
            achou = true;
        }
        if (achou) break;
    }
    if (achou){
        esac('S');
    } else {
        esac('N');
    }
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}