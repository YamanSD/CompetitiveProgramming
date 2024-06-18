/**
 * TwoSetsII
 * 12:52 PM 6/18/2024
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

int modBinExp(int b, int e) {
    if (e == 0) {
        return 1;
    }

    int res = modBinExp(b, e / 2);
    if (e % 2) {
        return (((res * res) % MOD) * b) % MOD;
    }

    return (res * res) % MOD;
}


void solve() {
    fast
    int n;
    cin >> n;
    int sm = (n * (n + 1)) / 2, cs[n];

    if (sm % 2) {
        cout << 0 << nl;
        return;
    }
    sm /= 2;

    iota(cs, cs + n, 1);
    vector<vector<int>> dp(n + 1, vector<int>(sm + 1, 0));
    dp[0][0] = 1;

    for (int c = 0; c < n; c++) {
        for (int p = 0; p <= sm; p++) {
            dp[c + 1][p] = dp[c][p];

            if (p >= cs[c]) {
                dp[c + 1][p] = (dp[c + 1][p] + dp[c][p - cs[c]]) % MOD;
            }
        }
    }

    cout << (dp[n][sm] * modBinExp(2, MOD - 2)) % MOD << nl;
}

int32_t main() { solve(); }
