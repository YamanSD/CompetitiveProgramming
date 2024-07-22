/**
 * 14:08:17 7/15/24
 * NewTheatreSquare
 */
// ./CodeForces/1000/NewTheatreSquare.cpp
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

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        char g[n][m];
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                cin >> g[r][c];
            }
        }

        int res = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                if (g[r][c] == '.') {
                    if (c < m - 1 and 2 * x > y and g[r][c + 1] == '.') {
                        res += y;
                        g[r][c] = g[r][c + 1] = '*';
                    } else {
                        res += x;
                        g[r][c] = '*';
                    }
                }
            }
        }
        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
