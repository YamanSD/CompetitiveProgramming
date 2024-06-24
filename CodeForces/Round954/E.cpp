/**
 * 12:55:44 6/24/24
 * E
 */
// ./CodeForces/Round954/E.cpp
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
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        int a[n];
        for (int& i: a) cin >> i;
        map<int, vector<int>> cnt;

        for (int i: a) {
            cnt[i % k].push_back(i);
        }

        int v = 0, res = 0;
        bool fail = false;
        for (auto& p: cnt) {
            auto l = p.S;
            std::sort(l.begin(), l.end());
            if (l.size() % 2 == 0) {
                for (int i = 1; i < l.size(); i += 2) {
                    res += (l[i] - l[i - 1]) / k;
                }
            } else {
                v++;
                if (v > n % 2) {
                    fail = true;
                    break;
                }

                int le = l.size();
                vector<int> zr(le, 0);

                for (int i = 2; i < le; i += 2) {
                    zr[i] = (l[i] - l[i - 1]) / k + zr[i - 2];
                }

                int ma = zr.back(), be = 0, q = INF;
                for (int i = 0; i < le; i++) {
                    if (i % 2) {
                        be += (l[i] - l[i - 1]) / k;
                    } else {
                        q = min(q, be + ma - zr[i]);
                    }
                }
                res += q;
            }
        }
        if (fail) cout << -1 << nl;
        else cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
