/**
 * MakeItUgly
 * 1:40 PM 6/2/2024
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
    int t, n, last, res;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];
        last = -1;
        res = n;

        for (int& i: a) cin >> i;

        for (int i = 0; i < n; i++) {
            if (a[i] != a[0]) {
                res = min(res, i - last - 1);
                last = i;
            }
        }

        res = min(res, n - last - 1);

        if (res == n) {
            cout << -1 << nl;
        } else {
            cout << res << nl;
        }
    }
}
