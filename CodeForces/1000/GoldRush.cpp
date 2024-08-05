/**
 * 20:16:17 8/3/24
 * GoldRush
 */
// ./CodeForces/1000/GoldRush.cpp
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

bool ok(int x, int m) {
    if (x == m) return true;
    if (x < 1) return false;
    if (x % 3 == 0) return ok(x / 3, m) or ok(2 * (x / 3), m);
    return false;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (ok(n, m)) YES else NO
    }
}

int32_t main() {
    fast
    solve();
}
