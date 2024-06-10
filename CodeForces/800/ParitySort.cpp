/**
 * ParitySort
 * 1:55 PM 6/10/2024
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
        int a[n], b[n];
        for (int& i: a) cin >> i;
        for (int i = 0; i < n; i++) b[i] = a[i];
        sort(b, b + n);

        bool fail = false;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != b[i] % 2) {
                fail = true;
                break;
            }
        }

        cout << (fail ? "NO" : "YES") << nl;
    }
}
