/**
 * 12:30:02 7/24/24
 * B2
 */
// ./CodeForces/Div2-961/B2.cpp
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
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[n];
        map<int, int> mp;
        for (int& i: a) cin >> i;
        for (int& i: b) cin >> i;
        for (int i = 0; i < n; i++) mp[a[i]] = b[i];
        int mx = 0;

        for (auto& p: mp) {
            int x = p.F, c_x = p.S;
            int k1 = min(m / x, c_x);
            mx = max(mx, k1 * x);

            auto q = mp.lower_bound(x + 1);
            if (q == mp.end() or q->F != x + 1) continue;
            int c_x1 = q->S;
            int pred = x * k1;
            c_x -= k1;

            int coins = m - pred; // Remaining

            if (coins >= x + 1) {
                int k2 = min(coins / (x + 1), c_x1);
                pred += k2 * (x + 1);
                c_x1 -= k2;
                coins = m - pred;
            }

            mx = max(mx, min(m / (x + 1), c_x1));
            pred += min(coins, min(c_x1, k1));
            mx = max(pred, mx);
        }

        cout << mx << nl;
    }
}

int32_t main() {
    fast
    solve();
}
