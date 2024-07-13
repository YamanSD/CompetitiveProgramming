/**
 * 15:57:26 7/13/24
 * FillingShapes
 */
// ./CodeForces/1000/FillingShapes.cpp
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
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    cin >> n;
    if (n % 2) {
        cout << 0 << nl;
        return;
    }

    int dp[n / 2 + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n / 2; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            dp[i] += dp[j] + 1;
        }
    }

    cout << dp[n / 2] + 1 << nl;
}

int32_t main() {
    fast
    solve();
}
