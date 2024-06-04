/**
 * RudolfAndTheBallGame
 * 1:06 PM 6/4/2024
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
    int t, n, m, x, r, tmp;
    map<int, bool> pos, addr;
    char dir;
    cin >> t;

    while (t--) {
        cin >> n >> m >> x;
        pos.clear();
        pos[x] = true;

        for (int i = 0; i < m; i++) {
            addr.clear();
            cin >> r >> dir;

            for (auto& p: pos) {
                if (p.second) {
                    p.second = false;

                    if (dir == '0' or dir == '?') {
                        tmp = p.first;
                        addr[(tmp + r - 1) % n + 1] = true;
                    }

                    if (dir == '1' or dir == '?') {
                        tmp = p.first;
                        addr[(tmp - r + n - 1) % n + 1] = true;
                    }
                }
            }

            for (auto& p: addr) {
                pos[p.first] = true;
            }
        }

        vector<int> res;

        for (auto& p: pos) {
            if (p.second) {
                res.push_back(p.first);
            }
        }

        cout << res.size() << nl;
        for (int i: res) cout << i << ' ';
        cout << nl;
    }
}
