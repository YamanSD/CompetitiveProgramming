/**
 * 18:50:03 7/25/24
 * E
 */
// ./CodeForces/Div3-481/E.cpp
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
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

bool pred(int n) { return n >= 0; }

void solve() {
    int n, w;
    cin >> n >> w;
    int a[n];
    vector<int> v;
    for (int& i: a) cin >> i;
    int ps[n + 1]; ps[0] = 0;
    for (int i = 0; i < n; i++) {
        ps[i + 1] = ps[i] + a[i];
    }
    pii rng{0, w};
    for (int i = 1; i <= n; i++) {
        if (ps[i] > 0) {
            rng.S = min(rng.S, w - ps[i]);
        } else {
            rng.F = max(rng.F, -ps[i]);
        }
    }
    int res = rng.S - rng.F + 1;
    if (res < 0 or res > w + 1) res = 0;
    cout << res << nl;
}

int32_t main() {
    fast
    solve();
}
