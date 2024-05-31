/**
 * TwoDivisors
 * 2:53 PM 5/31/2024
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
    int t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (b % a == 0) {
            cout << b * (b / a) << nl;
        } else {
            cout << lcm(a, b) << nl;
        }
    }
}
