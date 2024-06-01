/**
 * RectangleFilling
 * 1:46 PM 6/1/2024
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
    int t, n, m;
    bool impossible;
    cin >> t;

    while (t--) {
        cin >> n >> m;
        char g[n][m];
        impossible = true;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> g[i][j];
            }
        }

        if (g[0][0] == g[n - 1][m - 1]) {
            cout << "YES" << nl;
            continue;
        }

        for (int i = 0; i < m - 1; i++) {
            if (g[0][i] != g[0][i + 1] or g[n - 1][i] != g[n - 1][i + 1]) {
                impossible = false;
                break;
            }
        }

        if (impossible) {
            cout << "NO" << nl;
            continue;
        }

        impossible = true;
        for (int i = 0; i < n - 1; i++) {
            if (g[i][0] != g[i + 1][0] or g[i][m - 1] != g[i + 1][m - 1]) {
                impossible = false;
                break;
            }
        }

        cout << (impossible ? "NO" : "YES") << nl;
    }
}
