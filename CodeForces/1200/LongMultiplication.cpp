/**
 * LongMultiplication
 * 1:05 PM 6/2/2024
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
    int t;
    string x, y;
    cin >> t;

    while (t--) {
        cin >> x >> y;

        if (x == y) {
            cout << x << nl << y << nl;
            continue;
        }

        bool fmx = false;
        for (int i = 0; i < x.size(); i++) {
            if ((x[i] > y[i]) == fmx) {
                swap(x[i], y[i]);
            }

            fmx |= (x[i] != y[i]);
        }

        cout << x << nl << y << nl;
    }
}
