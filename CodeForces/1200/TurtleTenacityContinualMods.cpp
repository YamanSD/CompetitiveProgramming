/**
 * TurtleTenacityContinualMods
 * 3:47 PM 6/4/2024
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
        int a[n];

        for (int& i: a) cin >> i;
        sort(a, a + n);

        if (a[0] != a[1]) {
            cout << "YES" << nl;
            continue;
        } else {
            bool pass = false;

            for (int i = 1; i < n; i++) {
                if (a[i] % a[0]) {
                    pass = true;
                    break;
                }
            }

            cout << (pass ? "YES" : "NO") << nl;
        }
    }
}
