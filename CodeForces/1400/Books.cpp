/**
 * Books
 * 1:10 PM 6/7/2024
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

void solve() {
    fast
    int n, t, res = 0, j = -1, sm = 0;
    cin >> n >> t;
    int a[n];

    for (int& i: a) cin >> i;

    for (int i = 0; i < n; i++) {
        if (sm + a[i] <= t) {
            sm += a[i];
        } else {
            sm += a[i];

            while (sm > t) {
                sm -= a[++j];
            }
        }

        res = max(res, i - j);
    }

    cout << res << nl;
}
