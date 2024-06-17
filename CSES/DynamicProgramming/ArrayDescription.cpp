/**
 * ArrayDescription
 * 11:14 AM 6/17/2024
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
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int& i: a) cin >> i;

    vector<vector<int>> g(n, vector<int>(m + 1, 0));
    if (a[0]) {
        g[0][a[0]] = 1;
    } else {
        for (int i = 1; i <= m; i++) {
            g[0][i] = 1;
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] == 0) {
            for (int j = 1; j <= m; j++) {
                if (j - 1 >= 1) {
                    g[i][j] = (g[i][j] + g[i - 1][j - 1]) % MOD;
                }

                g[i][j] = (g[i][j] + g[i - 1][j]);

                if (j + 1 <= m) {
                    g[i][j] = (g[i][j] + g[i - 1][j + 1]) % MOD;
                }
            }
        } else {
            int j = a[i];

            if (j - 1 >= 1) {
                g[i][j] = (g[i][j] + g[i - 1][j - 1]) % MOD;
            }

            g[i][j] = (g[i][j] + g[i - 1][j]);

            if (j + 1 <= m) {
                g[i][j] = (g[i][j] + g[i - 1][j + 1]) % MOD;
            }
        }
    }

    int res = 0;
    for (int i = 1; i <= m; i++) {
        res = (res + g[n - 1][i]) % MOD;
    }

    cout << res << nl;
}

int32_t main() { solve(); }
