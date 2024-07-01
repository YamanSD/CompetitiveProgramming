/**
 * 19:33:52 7/1/24
 * PashmakAndGarden
 */
// ./CodeForces/1200/PashmakAndGarden.cpp
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
    int x1, y1, x2, y2, d;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        d = abs(y1 - y2);
        cout << x1 + d << ' ' << y1 << ' ' << x2 + d << ' ' << y2 << nl;
    } else if (y1 == y2) {
        d = abs(x1 - x2);
        cout << x1 << ' ' << y1 + d << ' ' << x2 << ' ' << y2 + d << nl;
    } else {
        if (abs(x1 - x2) != abs(y1 - y2)) {
            cout << -1 << nl;
        } else {
            cout << x2 << ' ' << y1 << ' ' << x1 << ' ' << y2 << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
