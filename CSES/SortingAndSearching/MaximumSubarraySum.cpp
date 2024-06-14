/**
 * MaximumSubarraySum
 * 4:44 PM 6/12/2024
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;

    int cur, res = LONG_LONG_MIN;
    for (int i = 0; i < n; i++) {
        if (i) {
            cur = max(a[i], cur + a[i]);
        } else {
            cur = a[i];
        }

        res = max(cur, res);
    }

    cout << res << nl;
}

//int32_t main() {
//    solve();
//}