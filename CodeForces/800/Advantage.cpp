/**
 * Advantage
 * 2:40 PM 6/10/2024
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
        pair<int, int> a[n];
        int b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            b[i] = a[i].first;
            a[i].second = i;
        }

        sort(a, a + n);
        for (int i = 0; i < n; i++) {
            if (b[i] == a[n - 1].first) {
                b[i] -= a[n - 2].first;
            } else {
                b[i] -= a[n - 1].first;
            }
        }

        for (int i: b) cout << i << ' ';
        cout << nl;
    }
}
