/**
 * SortingWithTwos
 * 1:08 PM 6/10/2024
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
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n], b[n - 1];
        for (int& i: a) cin >> i;
        for (int i = 0; i < n - 1; i++) {
            b[i] = a[i + 1] - a[i];
        }

        bool fail = false;
        for (int i = 0; i < n - 1; i++) {
            int j = i + 1;
            if (b[i] < 0 and ((j & (j - 1)) != 0)) {
                fail = true;
            }
        }

        cout << (fail ? "NO" : "YES") << nl;
    }
}
