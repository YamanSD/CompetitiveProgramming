/**
 * 14:42:35 7/8/24
 * DZYLovesChessboard
 */
// ./CodeForces/1200/DZYLovesChessboard.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, m;
    cin >> n >> m;
    char g[n][m];
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            cin >> g[r][c];
        }
    }
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (g[r][c] == '.') {
                g[r][c] = r % 2 ? c % 2 ? 'W' : 'B' : c % 2 ? 'B' : 'W';
            }
        }
    }
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            cout << g[r][c];
        }
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
