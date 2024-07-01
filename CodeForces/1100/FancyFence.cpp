/**
 * 15:53:26 6/25/24
 * FancyFence
 */
// ./CodeForces/1100/FancyFence.cpp
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
    int t, a;
    cin >> t;
    while (t--) {
        cin >> a;
        // 180 * (n - 2) = a * n
        // 180n - 360 = an
        // (180 - a)n - 360 = 0
        // n = (360) / (180 - a)
        if (360 % (180 - a)) {
            cout << "NO" << nl;
        } else {
            cout << "YES" << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
