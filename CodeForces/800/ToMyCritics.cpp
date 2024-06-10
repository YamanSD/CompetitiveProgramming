/**
 * ToMyCritics
 * 12:49 PM 6/10/2024
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
    int t, a[3];
    cin >> t;

    while (t--) {
        for (int& i: a) cin >> i;
        bool fail = true;
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (a[i] + a[j] >= 10) {
                    fail = false;
                    break;
                }
            }
        }

        cout << (fail ? "NO" : "YES") << nl;
    }
}
