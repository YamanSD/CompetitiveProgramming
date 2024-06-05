/**
 * SofiaAndTheLostOperations
 * 3:00 PM 6/5/2024
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
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n], b[n];
        for (int& i: a) cin >> i;
        for (int& i: b) cin >> i;
        cin >> m;
        int d[m];
        for (int& i: d) cin >> i;

        vector<int> c;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                c.push_back(b[i]);
            }
        }
        sort(c.begin(), c.end());

        bool impossible = true;
        for (int i: b) {
            if (i == d[m - 1]) {
                impossible = false;
                break;
            }
        }

        if (impossible) {
            cout << "NO" << nl;
            continue;
        }

        sort(d, d + m);

        bool fail = false;
        int ib = 0, id = 0;
        while (ib < c.size() and id < m) {
            if (c[ib] == d[id]) {
                ib++;
                id++;
            } else if (c[ib] < d[id]) {
                fail = true;
                break;
            } else {
                id++;
            }
        }

        cout << (fail or ib != c.size() ? "NO" : "YES") << nl;
    }
}
