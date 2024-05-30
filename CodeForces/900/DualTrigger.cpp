/**
 * DualTrigger
 * 11:42 AM 5/30/2024
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
    int cnt, t, n, mi, mx;
    char c;
    cin >> t;

    while (t--) {
        cin >> n;
        cnt = 0;
        mi = n;
        mx = -1;

        for (int i = 0; i < n; i++) {
            cin >> c;
            if (c == '1') {
                cnt++;
                mi = min(mi, i);
                mx = max(mx, i);
            }
        }

        cout << (cnt % 2 == 1 || (cnt == 2 && mx - mi == 1) ? "NO" : "YES") << nl;
    }
}
