/**
 * EditDistance
 * 8:42 PM 6/17/2024
 */
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
#define F first
#define S second
#define INF ((int)1e18)
#define MOD ((int)1e9 + 7)
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    string s0, s1;
    cin >> s0 >> s1;
    size_t n = s0.size(), m = s1.size();
    vector<vector<size_t>> g(n + 1, vector<size_t>(m + 1, 0));

    for (int c = 0; c <= m; c++) {
        g[0][c] = c;
    }
    for (int r = 0; r <= n; r++) {
        g[r][0] = r;
    }

    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= m; c++) {
            g[r][c] = min(g[r][c - 1] + 1, min(g[r - 1][c] + 1, g[r - 1][c - 1] + (s0[r - 1] != s1[c - 1])));
        }
    }

    cout << g[n][m] << nl;
}

int32_t main() { solve(); }
