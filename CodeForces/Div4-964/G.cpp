/**
 * 12:53:50 8/8/24
 * G
 */
// ./CodeForces/Div4-964/G.cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
#define unsigned unsigned int
#define double long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl endl
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
#define LT int T; cin >> T; while (T--)
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

int query(int a, int b) {
    int r;
    cout << "? " << a << ' ' << b << nl;
    cin >> r;
    return r;
}

void ans(int v) {
    cout << "! " << v << nl;
}

void solve() {
    int l = 1, r = 999;
    while (r - l > 2) {
        int a = (2 * l + r) / 3;
        int b = (2 * r + l) / 3;
        int res = query(a, b);

        if (res == (a + 1) * (b + 1)) {
            r = a;
        } else if (res == a * b) {
            l = b;
        } else {
            l = a;
            r = b;
        }
    }
    if (r - l == 2) {
        int res = query(1, l + 1);
        if (res != l + 1) r = l + 1;
    }
    ans(r);
}

int32_t main() {
    fast
    LT solve();
}
