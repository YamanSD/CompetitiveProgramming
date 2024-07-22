/**
 * 12:42:19 7/22/24
 * Dijkstra
 */
// ./1900/Dijkstra.cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
#define unsigned unsigned int
#define double long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl '\n'
#define NO (cout << "NO" << nl);
#define YES (cout << "YES" << nl);
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

int n, m, pr[100001];
long long dist[100001];
vector<pair<int, int> > g[100001];
priority_queue<pair<int, long long > >pq;

void trace(int v) {
    if(pr[v]) trace(pr[v]);
    cout<<v << ' ';
}

void solve() {
    cin>>n>>m;
    fill_n(dist+1, n, INF);
    for(int i = 0,u,v,w; i < m; i++){
        cin>>u>>v>>w;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);

    }
    pq.emplace(dist[1]=0, 1);
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for(auto p: g[u]) if(dist[u] + p.second < dist[p.first]) {
                dist[p.first] = dist[u] + p.second;
                pr[p.first] = u;
                pq.emplace(-dist[p.first], p.first);
            }
    }
    if(dist[n] == LLONG_MAX) printf("-1");
    else trace(n);
}

int32_t main() {
    fast
    solve();
}
