/**
 * LittleGirlAndMaximumSum
 * 1:57 PM 6/12/2024
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
    int n, q, l, r;
    cin >> n >> q;
    int a[n], c[n + 1];
    for (int& i: a) cin >> i;
    memset(c, 0, sizeof(int) * (n + 1));
    while (q--) {
        cin >> l >> r;
        c[l - 1]++;
        c[r]--;
    }

    for (int i = 1; i < n; i++) {
        c[i] += c[i - 1];
    }

    sort(a, a + n);
    sort(c, c + n);
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += a[i] * c[i];
    }

    cout << res << nl;
}
