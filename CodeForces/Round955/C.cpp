/**
 * 18:56:29 6/25/24
 * C
 */
// ./CodeForces/Round955/C.cpp
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
    int t, n, l, r;
    cin >> t;
    while (t--) {
        cin >> n >> l >> r;
        int a[n];
        for (int& i: a) cin >> i;
        vector<int> dp(n + 1, 0);
        int s = 0, j = -1;
        for (int i = 0; i < n; i++) {
            dp[i + 1] = max(dp[i + 1], dp[i]);
            if (j < i) {
                j = i;
                s = 0;
            }

            while (j < n and s < l) s += a[j++];

            if (l <= s and s <= r) {
                dp[j] = max(dp[j], dp[i] + 1);
            }
            s -= a[i];
        }

        cout << dp[n] << nl;
    }
}

int32_t main() {
    fast
    solve();
}
