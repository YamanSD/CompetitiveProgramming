/**
 * 13:45:51 7/14/24
 * MinimumProduct
 */
// ./CodeForces/1100/MinimumProduct.cpp
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

int minProd(int x, int y, int n) {
    if (y < x) swap(x, y);
    return n < x ? y * (x - n) : max(y - (n - x + 1), 1ll);
}

int minProd(int a, int b, int x, int y, int n) {
    int t = min(n, a - x);
    n -= t;
    a -= t;
    t = min(n, b - y);
    b -= t;

    return a * b;
}


void solve() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        cout << min(minProd(a, b, x, y, n), minProd(b, a, y, x, n)) << nl;
    }
}

int32_t main() {
    fast
    solve();
}
