/**
 * 17:47:29 6/25/24
 * B
 */
// ./CodeForces/Round955/B.cpp
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

int log(int a, int b) {
    return floor(log2(a) / log2(b));
}

void solve() {
    int t, x, y, k, ost;
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;

        while (k > 0 and x != 1) {
            ost = min(k, y - x % y);
            x += ost;
            while (x % y == 0) {
                x /= y;
            }
            k -= ost;
        }
        cout << x + k % (y - 1) << nl;
    }
}

int32_t main() {
    fast
    solve();
}
