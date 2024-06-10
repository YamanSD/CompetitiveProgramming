/**
 * EqualCandies
 * 2:25 PM 6/10/2024
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
    int t, n, sm, mn;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];
        sm = 0;
        mn = 10'000'001;
        for (int& i: a) {
            cin >> i;
            mn = min(i, mn);
        }

        for (int i: a) sm += i - mn;

        cout << sm << nl;
    }
}
