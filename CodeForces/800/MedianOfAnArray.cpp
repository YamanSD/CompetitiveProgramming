/**
 * MedianOfAnArray
 * 2:15 PM 6/3/2024
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
    int t, n, res;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];

        for (int& i: a) cin >> i;

        if (n == 1) {
            cout << 1 << nl;
            continue;
        }

        sort(a, a + n);

        int med = (n + 1) / 2 - 1, l = -1, r = -1;

        for (int i = 0; i < n; i++) {
            if (l == -1 and a[i] == a[med]) {
                l = i;
            } else if (r == -1 and l != -1 and (a[i] != a[med] or i == n - 1)) {
                r = i - 1 + (a[i] == a[med]);
            }
        }

        cout << r - med + 1 << nl;
    }
}
