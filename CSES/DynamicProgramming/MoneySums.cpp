/**
 * MoneySums
 * 11:13 AM 6/18/2024
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
    int cns[n], mx = 0;
    for (int& i: cns) {
        cin >> i;
        mx += i;
    }
    vector<vector<int>> dp(n + 1, vector<int>(mx + 1, INF));
    dp[0][0] = 0;

    for (int c = 0; c < n; c++) {
        for (int p = 0; p <= mx; p++) {
            dp[c + 1][p] = dp[c][p];

            if (p >= cns[c]) {
                dp[c + 1][p] = min(dp[c + 1][p], 1 + dp[c][p - cns[c]]);
            }
        }
    }

    vector<int> res;
    for (int i = 1; i <= mx; i++) {
        if (dp[n][i] < INF) {
            res.push_back(i);
        }
    }

    cout << res.size() << nl;
    for (int i: res) cout << i << ' ';
    cout << nl;
}

int32_t main() { solve(); }
