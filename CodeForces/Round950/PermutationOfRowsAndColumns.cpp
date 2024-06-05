/**
 * PermutationOfRowsAndColumns
 * 3:58 PM 6/5/2024
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
    int t, n, m, nm, x, y;
    cin >> t;

    while (t--) {
        cin >> n >> m;
        nm = n * m;
        vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m));

        for (auto& r: a) {
            for (auto& c: r) {
                cin >> c;
            }
        }
        for (auto& r: b) {
            for (auto& c: r) {
                cin >> c;
            }
        }

        vector<int> p1i(nm), p2i(nm), p1j(nm), p2j(nm);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                x = a[i][j] - 1;
                y = b[i][j] - 1;

                p1i[x] = p2i[y] = i;
                p1j[x] = p2j[y] = j;
            }
        }

        vector<set<int>> pi(nm), pj(nm);
        for (x = 0; x < nm; x++) {
            int i1 = p1i[x], i2 = p2i[x];
            int j1 = p1j[x], j2 = p2j[x];
            pi[i1].insert(i2);
            pj[j1].insert(j2);
        }

        bool fail = false;
        for (x = 0; x < nm; x++) {
            if (pi[x].size() > 1 or pj[x].size() > 1) {
                fail = true;
                break;
            }
        }

        cout << (fail ? "NO" : "YES") << nl;
    }
}
