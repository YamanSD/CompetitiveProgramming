/**
 * MissingCoinSum
 * 5:03 PM 6/12/2024
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
    int a[n], res = 1;
    for (int& i: a) {
        cin >> i;
    }
    sort(a, a + n);
    for (int i = 0; i < n and a[i] <= res; i++) {
        res += a[i];
    }

    cout << res << nl;
}

//int32_t main() {
//    solve();
//}
