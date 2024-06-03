/**
 * BazokaAndMochasArray
 * 1:50 PM 6/3/2024
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
        int a[n], l = -1;

        for (int& i: a) cin >> i;

        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                l = i - 1;
                break;
            }
        }

        if (l == -1) {
            cout << "YES" << nl;
            continue;
        }

        if (a[n - 1] > a[0]) {
            cout << "NO" << nl;
        } else {
            for (int i = l + 2; i < n; i++) {
                if (a[i - 1] > a[i]) {
                    l = -1;
                    break;
                }
            }

            cout << (l == -1 ? "NO" : "YES") << nl;
        }
    }
}
