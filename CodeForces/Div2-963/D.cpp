/**
 * 13:20:58 8/5/24
 * D
 */
// ./CodeForces/Div2-963/D.cpp
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
#define EPS 1e-9l
#define pii pair<int, int>
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 500005;
int n, k, a[N];
int dp[N], b[N];

bool check(int med) {
    for (int i = 0; i < n; i++) {
        if (a[i] >= med) {
            b[i] = 1;
        } else {
            b[i] = -1;
        }
    }

    dp[0] = b[0];
    for (int i = 1; i < n; i++) {
        if (i % k == 0) {
            dp[i] = max(dp[i - k], b[i]);
        } else {
            dp[i] = dp[i - 1] + b[i];
            if (i > k) {
                dp[i] = max(dp[i], dp[i - k]);
            }
        }
    }

    return dp[n - 1] > 0;
}

void solve() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int lo = 1, hi = INF;
        while (lo <= hi) {
            int mid = (lo + hi) >> 1;
            if (check(mid)) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        cout << hi << nl;
    }
}

int32_t main() {
    fast
    solve();
}
