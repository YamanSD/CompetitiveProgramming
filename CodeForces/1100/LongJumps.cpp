/**
 * 19:40:57 7/1/24
 * LongJumps
 */
// ./CodeForces/1100/LongJumps.cpp
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
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n], mx = 1, dp[n + 1];
        for (int& i: a) cin >> i;

        for (int i = n; i >= 1; i--) {
            dp[i] = a[i - 1] + (i + a[i - 1] <= n ? dp[i + a[i - 1]] : 0);
            mx = max(dp[i], mx);
        }

        cout << mx << nl;
    }
}

int32_t main() {
    fast
    solve();
}
