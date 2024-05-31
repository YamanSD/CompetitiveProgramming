/**
 * MakeEqualAgain
 * 1:57 PM 5/31/2024
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
    int t, n, res, l, r;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        l = r = 0;

        while (l < n and a[l] == a[0]) {
            l++;
        }

        while (r < n and a[n - r - 1] == a[n - 1]) {
            r++;
        }

        res = n;
        if (a[0] == a[n - 1]) {
            res -= l + r;
        } else {
            res -= max(l, r);
        }

        cout << max(0ll, res) << nl;
    }
}
