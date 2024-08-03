/**
 * 17:18:44 8/2/24
 * Winner
 */
// ./CodeForces/1500/Winner.cpp
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
#define EPS 1e-9l
#define pii pair<int, int>
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    cin >> n;
    map<int, set<string>, greater<>> m;
    map<string, int, greater<>> u;
    vector<pair<string, int>> g;
    string s;
    int sc;
    while (n--) {
        cin >> s >> sc;
        g.emplace_back(s, sc);
        m[u[s]].erase(s);
        u[s] += sc;
        m[u[s]].insert(s);
    }
    int mx = -INF;
    for (auto& p: u) mx = max(mx, p.S);
    u.clear();
    auto& mp{m[mx]};
    for (auto& p: g) {
        if (mp.count(p.F)) {
            u[p.F] += p.S;

            if (u[p.F] >= mx) {
                cout << p.F << nl;
                return;
            }
        }
    }
}


int32_t main() {
    fast
    solve();
}
