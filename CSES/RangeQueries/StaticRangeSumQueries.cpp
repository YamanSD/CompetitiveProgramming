/**
 * 12:26:37 6/21/24
 * StaticRangeSumQueries
 */
// ./CSES/RangeQueries/StaticRangeSumQueries.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, q;
    cin >> n >> q;
    int a[n], sm[n + 1];
    sm[0] = 0;
    for (int& i: a) cin >> i;
    for (int i = 1; i <= n; i++) {
        sm[i] = sm[i - 1] + a[i - 1];
    }
    int s, e;
    while (q--) {
        cin >> s >> e;
        cout << sm[e] - sm[s - 1] << nl;
    }
}

int32_t main() {
    fast
    solve();
}
