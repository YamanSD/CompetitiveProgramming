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
    int t, n, res;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n], b[n];
        res = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            int j = i;

            while (j < n and a[i] > b[j]) {
                j++;
            }

            res = max(res, j - i);
        }

        cout << res << nl;
    }
}
