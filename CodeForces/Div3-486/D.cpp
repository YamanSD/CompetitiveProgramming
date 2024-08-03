/**
 * 15:14:27 8/3/24
 * D
 */
// ./CodeForces/Div3-486/D.cpp
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
#define NO (cout << "NO" << nl);
#define YES (cout << "YES" << nl);
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define EPS 1e-9l
#define pii pair<int, int>
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;
    map<int, int> m;
    for (int i: a) m[i]++;

    int mx = 0;
    set<int> vals;
    auto mc = m;
    for (int i = 0; i < 31; i++) {
        int inc = 1 << i;
        for (auto& p: mc) {
            int v = p.F, cnt = p.S, v1 = v + inc, v2 = v + 2 * inc;
            int cnt1 = 0, cnt2 = 0;
            if (m.find(v1) != m.end()) {
                cnt1 = m[v1];
            }
            if (m.find(v2) != m.end()) {
                cnt2 = m[v2];
            }

            int mp = cnt + cnt1 + cnt2;
            if (mx < mp) {
                mx = mp;
                vals = { v, v1, v2 };
            }
        }
    }

    cout << mx << nl;
    for (int i: vals) {
        for (int j = 0; j < m[i]; j++) {
            cout << i << ' ';
        }
    }
    cout << nl;
}

int32_t main() {
    fast
    solve();
}
