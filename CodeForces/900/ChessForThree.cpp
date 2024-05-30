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
    int t, p0, p1, p2;
    cin >> t;

    while (t--) {
        cin >> p0 >> p1 >> p2;

        if ((p0 + p1 + p2) % 2) {
            cout << -1 << nl;
            continue;
        }

        cout << min((p0 + p1 + p2) / 2, p0 + p1) << nl;
    }
}
