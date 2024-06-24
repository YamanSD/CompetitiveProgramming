/**
 * 17:53:33 6/23/24
 * B
 */
// ./CodeForces/Round954/B.cpp
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
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    int t, n, m;
    cin >> t;

    while (t--) {
        cin >> n >> m;
        vector<vector<int>> g(n, vector<int>(m));
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                cin >> g[r][c];
            }
        }

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                bool pro = true;
                int mx = 0;

                if (r and g[r][c] <= g[r - 1][c]) pro = false;
                else if (r) mx = max(mx, g[r - 1][c]);
                if (c and g[r][c] <= g[r][c - 1]) pro = false;
                else if (c) mx = max(mx, g[r][c - 1]);
                if (r < n - 1 and g[r][c] <= g[r + 1][c]) pro = false;
                else if (r < n - 1) mx = max(mx, g[r + 1][c]);
                if (c < m - 1 and g[r][c] <= g[r][c + 1]) pro = false;
                else if (c < m - 1) mx = max(mx, g[r][c + 1]);

                if (pro) {
                    g[r][c] = mx;
                }
            }
        }

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                cout << g[r][c] << ' ';
            }cout << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
