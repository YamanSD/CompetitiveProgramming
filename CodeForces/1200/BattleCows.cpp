/**
 * BattleCows
 * 12:00 PM 6/3/2024
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
    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        k--;
        int a[n];
        bool ls[n];

        for (int& i: a) cin >> i;

        int x = find_if(a, a + n, [&](int v) {
            return v > a[k];
        }) - a;

        vector<int> pos(n);
        iota(pos.begin(), pos.end(), 0);
        int res = 0;

        for (int i: {0ll, x}) {
            if (i == n) {
                continue;
            }

            swap(pos[i], pos[k]);
            vector<int> stt(n);
            for (int j = 1, u = pos[0]; j < n; j++) {
                int v = pos[j];
                u = (a[u] > a[v] ? u : v);
                stt[u]++;
            }
            swap(pos[i], pos[k]);
            res = max(res, stt[k]);
        }

        cout << res << nl;
    }
}
