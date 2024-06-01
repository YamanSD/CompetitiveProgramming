/**
 * EqualXOR
 * 5:02 PM 6/1/2024
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
        k *= 2;

        int a[2 * n], occ[n + 1];
        memset(occ, 0, sizeof(int) * (n + 1));

        for (auto& i: a) {
            cin >> i;
        }

        for (int i = 0; i < n; i++) {
            occ[a[i]]++;
        }

        vector<int> g0, g1, g2;
        for (int i = 1; i <= n; i++) {
            if (occ[i] == 0) {
                g0.push_back(i);
            } else if (occ[i] == 1) {
                g1.push_back(i);
            } else {
                g2.push_back(i);
            }
        }

        int v{0};

        for (auto x: g2) {
            if (v < k) {
                v += 2;
                cout << x << ' ' << x << ' ';
            }
        }

        for (auto x: g1) {
            if (v < k) {
                v++;
                cout << x << ' ';
            }
        }

        cout << nl;

        v = 0;
        for (auto x : g0) {
            if (v < k) {
                v += 2;
                cout << x << " " << x << " ";
            }
        }
        for (auto x : g1) {
            if (v < k) {
                v++;
                cout << x << " ";
            }
        }
        cout << nl;
    }
}
