/**
 * IHate1111
 * 3:18 PM 6/8/2024
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
    int t, x;
    bool fail;
    cin >> t;

    while (t--) {
        cin >> x;
        fail = true;

        for (int i = 0; i < 20; i++) {
            if (x % 11 == 0) {
                fail = false;
                break;
            }

            x -= 111;
            if (x < 0) {
                break;
            }
        }

        cout << (fail ? "NO" : "YES") << nl;
    }
}
