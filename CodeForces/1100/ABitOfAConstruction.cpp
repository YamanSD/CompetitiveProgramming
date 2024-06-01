/**
 * ABitOfAConstruction
 * 2:34 PM 6/1/2024
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
    int t, n, k, m;
    cin >> t;

    while (t--) {
        cin >> n >> k;

        int a[n];

        if (n == 1) {
            a[0] = k;
        } else {
            m = 0;

            for (int i = 0; i < 31; i++) {
                if (k & (1 << i)) {
                    m = i;
                }
            }

            a[0] = (1 << m) - 1;
            a[1] = k - a[0];

            for (int i = 2; i < n; i++) {
                a[i] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }

        cout << nl;
    }
}
