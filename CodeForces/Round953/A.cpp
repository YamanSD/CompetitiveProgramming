/**
 * 13:40:54 6/24/24
 * A
 */
// ./CodeForces/Round953/A.cpp
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
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];
        for (int& i: a) cin >> i;
        sort(a, a + n - 1);
        int res = 0;
        if (n > 1) res += a[n - 2];
        res += a[n - 1];
        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
