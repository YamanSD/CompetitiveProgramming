/**
 * RemovalGame
 * 11:50 AM 6/18/2024
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
    int a[n];
    for (int& i: a) cin >> i;
    vector<vector<int>> dp(n, vector<int>(n));
    int tot = 0;

    for (int i = 0; i < n; i++) {
        dp[i][i] = a[i];
        tot += a[i];
    }

    int fst, lst;
    for (int l = n - 1; l >= 0; l--) {
        for (int r = l + 1; r < n; r++) {
            fst = a[l] - dp[l + 1][r];
            lst = a[r] - dp[l][r - 1];
            dp[l][r] = max(fst, lst);
        }
    }

    cout << (tot + dp[0][n - 1]) / 2 << nl;
}

int32_t main() { solve(); }
