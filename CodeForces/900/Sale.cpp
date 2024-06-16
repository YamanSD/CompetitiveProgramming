/**
 * Sale
 * 8:36 AM 6/16/2024
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
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int& i: a) cin >> i;
    sort(a, a + n);
    int res = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] < 0) {
            res -= a[i];
        }
    }
    cout << res << nl;
}

int32_t main() {
    solve();
}
