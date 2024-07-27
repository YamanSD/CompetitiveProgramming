/**
 * 17:18:41 7/25/24
 * D
 */
// ./CodeForces/Div3-481/D.cpp
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
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;
    if (n == 1) {
        cout << 0 << nl;
        return;
    }
    vector<pii> pss;
    int ps[3]{-1, 0, 1};
    for (int p0: ps) {
        for (int p1: ps) {
            pss.emplace_back(a[0] + p0, a[1] + p1);
        }
    }
    int mn = INF, b[n];
    for (int i = 0; i < n; i++) b[i] = a[i];
    for (auto& p: pss) {
        a[0] = p.F, a[1] = p.S;
        for (int i = 2; i < n; i++) a[i] = b[i];
        int d = a[1] - a[0];
        int tm = (a[0] != b[0]) + (a[1] != b[1]);
        for (int i = 2; i < n; i++) {
            if (a[i] - a[i - 1] != d) {
                if (abs(a[i] - a[i - 1] - d) > 1) {
                    tm = INF;
                    break;
                } else {
                    a[i] = a[i - 1] + d;
                    tm++;
                }
            }
        }
        mn = min(mn, tm);
    }
    cout << (mn == INF ? -1 : mn) << nl;
}

int32_t main() {
    fast
    solve();
}
