/**
 * CutRibbon
 * 3:23 PM 6/6/2024
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
    int n, a, b, c, res = 0, rem;
    cin >> n >> a >> b >> c;

    for (int i = 0; i <= n; i += a) {
        for (int j = 0; i + j <= n; j += b) {
            rem = n - i - j;
            if (rem % c == 0) {
                res = max(res, i / a + j / b + rem / c);
            }
        }
    }

    cout << res << nl;
}
