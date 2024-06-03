/**
 * ChamoAndMochasArray
 * 12:45 PM 6/2/2024
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
    const int N = 1e5 + 10;
    int t, n, mn, mx, a[N];
    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        if (n == 2) {
            cout << min(a[1], a[2]) << nl;
            continue;
        }

        mx = min(a[1], a[2]);
        for (int i = 1; i <= n - 2; i++) {
            int temp[3];

            for (int j = 0; j < 3; j++) {
                temp[j] = a[i + j];
            }

            sort(temp, temp + 3);
            mx = max(mx, temp[1]);
        }

        cout << mx << nl;
    }
}
