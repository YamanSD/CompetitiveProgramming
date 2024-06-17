/**
 * BookShop
 * 9:50 AM 6/17/2024
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
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
    int n, x;
    cin >> n >> x;
    int h[n], s[n];
    for (int& i: h) cin >> i;
    for (int& i: s) cin >> i;
    vector<vector<int>> a(n + 1, vector<int>(x + 1, 0));

    for (int i = 0; i < n; i++) {
        for (int p = 0; p <= x; p++) {
            a[i + 1][p] = a[i][p];

            if (p >= h[i]) {
                a[i + 1][p] = max(a[i + 1][p], s[i] + a[i][max(p - h[i], 0)]);
            }
        }
    }

    cout << a[n][x] << nl;
}

int32_t main() { solve(); }
