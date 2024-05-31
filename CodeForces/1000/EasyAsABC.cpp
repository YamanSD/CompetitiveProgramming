/**
 * EasyAsABC
 * 3:10 PM 5/31/2024
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
    string g[3], res = "CCC";
    vector<pair<int, int>> p;

    for (auto& s: g) {
        cin >> s;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            p.emplace_back(i, j);
        }
    }

    for (auto& a: p) {
        for (auto& b: p) {
            for (auto& c: p) {
                if (a != b && b != c && a != c &&
                    max(abs(a.first - b.first), abs(a.second - b.second)) == 1 &&
                    max(abs(c.first - b.first), abs(c.second - b.second)) == 1) {
                    string t;
                    t += g[a.first][a.second];
                    t += g[b.first][b.second];
                    t += g[c.first][c.second];
                    res = min(res, t);
                }
            }
        }
    }

    cout << res << nl;
}
