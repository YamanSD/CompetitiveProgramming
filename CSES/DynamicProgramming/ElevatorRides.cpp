/**
 * ElevatorRides
 * 1:12 PM 6/19/2024
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

/**
 * Interesting observation.
 *
    int n, x;
    cin >> n >> x;
    int a[n], sm = 0;
    for (int& i: a) {
        cin >> i;
        sm += i;
    }
    int res = (sm + x - 1) / x;
 */

void solve() {
    fast
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int& i: a) cin >> i;
    vector<pair<int, int>> dp(1 << n, {INF, INF});
    dp[0] = {1, 0};

    for (int m = 1; m < (1 << n); m++) {
        for (int b = 0; b < n; b++) {
            if ((1 << b) & m) {
                int t = dp[m ^ (1 << b)].S;

                if (t + a[b] <= x) {
                    dp[m] = min(dp[m], {dp[m ^ (1 << b)].F, t + a[b]});
                } else {
                    dp[m] = min(dp[m], {dp[m ^ (1 << b)].F + 1, a[b]});
                }
            }
        }
    }

    cout << dp[(1 << n) - 1].F << nl;
}

int32_t main() { solve(); }
