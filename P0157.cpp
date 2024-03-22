#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

const int INF = 1e9 + 10;

using namespace std;

struct Edge
{
    int u, v, w; 

    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

class Graph
{
public:
    int n;     
    vector<Edge> edges;
    bool is_undirected;

    Graph(int n, bool is_undirected = true)
    {
        this->n = n;
        this->is_undirected = is_undirected;
    }
    void add_edge(int u, int v, int w)
    {
        Edge e(u, v, w);
        edges.push_back(e);
    }
    vector<int> bellman_ford(int s)
    {
        vector<int> dist(this->n, INF);
        dist[s] = 0;

        for (int step = 0; step < n - 1; step++)
        {
            for (int i = 0; i < (int)edges.size(); i++)
            {
                int u = edges[i].u, v = edges[i].v;

                if (dist[u] != INF)
                    dist[v] = min(dist[v], dist[u] + edges[i].w);
            }
        }

        for (int i = 0; i < (int)edges.size(); i++)
        {
            int u = edges[i].u, v = edges[i].v;

            if (dist[v] > dist[u] + edges[i].w)
                return vector<int>();
        }

        return dist;
    }
};


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, x, y, w;
    cin >> n >> m;
    Graph adj(n+1, false);
    for (int i = 0; i <m ;i++){
        cin >> x >> y >> w;
        adj.add_edge(x, y, w);
    }
    vector<int> dist = adj.bellman_ford(1);
    if (dist.empty()){
        esac("-INF");
    } else {
        esac(dist[n]);
    }
    return 0;
}
