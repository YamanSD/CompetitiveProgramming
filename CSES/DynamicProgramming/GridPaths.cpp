/**
 * GridPaths
 * 8:44 AM 6/17/2024
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
    int n;
    cin >> n;
    char g[n][n];
    int a[n + 2][n + 2];
    for (auto& r: g) {
        for (auto& c: r) {
            cin >> c;
        }
    }

    if (g[n - 1][n - 1] != '.' or g[0][0] != '.') {
        cout << 0 << nl;
        return;
    }

    for (int r = 0; r <= n + 1; r++) {
        for (int c = 0; c <= n + 1; c++) {
            if (r == 0 or c == 0 or r == n + 1 or c == n + 1) {
                a[r][c] = -1;
            } else {
                a[r][c] = g[r - 1][c - 1] == '.' ? 0 : -1;
            }
        }
    }
    a[n][n] = 1;

    for (int r = n; r >= 1; r--) {
        for (int c = n; c >= 1; c--) {
            if (a[r][c] >= 0) {
                if (a[r - 1][c] >= 0) {
                    a[r - 1][c] = (a[r - 1][c] + a[r][c]) % MOD;
                }

                if (a[r][c - 1] >= 0) {
                    a[r][c - 1] = (a[r][c - 1] + a[r][c]) % MOD;
                }
            }
        }
    }

    cout << a[1][1] << nl;
}

int32_t main() { solve(); }
