/**
 * KuriyamaMiraisStones
 * 9:16 AM 6/16/2024
 */
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n, m, t, l, r;
    cin >> n;
    int a[n], p0[n + 1], p1[n + 1];
    p0[0] = p1[1] = 0;
    for (int& i: a) cin >> i;
    for (int i = 1; i <= n; i++) {
        p0[i] = p0[i - 1] + a[i - 1];
    }
    sort(a, a + n);
    for (int i = 1; i <= n; i++) {
        p1[i] = p1[i - 1] + a[i - 1];
    }
    cin >> m;
    while (m--) {
        cin >> t >> l >> r;

        if (t == 1) {
            cout << p0[r] - p0[l - 1] << nl;
        } else {
            cout << p1[r] - p1[l - 1] << nl;
        }
    }
}

int32_t main() { solve(); }
