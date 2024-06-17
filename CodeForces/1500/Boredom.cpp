/**
 * Boredom
 * 1:27 PM 6/17/2024
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
    int n, mx = - 1;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int& i: a) {
        cin >> i;
        m[i]++;
        mx = max(mx, i);
    }

    int dp[mx + 1];
    dp[0] = 0;
    dp[1] = m[1];

    for (int i = 2; i <= mx; i++) {
        dp[i] = max(dp[i - 2] + m[i] * i, dp[i - 1]);
    }

    cout << dp[mx] << nl;
}

int32_t main() { solve(); }
