/**
 * 14:44:22 8/3/24
 * C
 */
// ./CodeForces/Div3-486/C.cpp
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
    int k, v;
    cin >> k;
    map<int, pair<int, int>> m;
    for (int r = 1; r <= k; r++) {
        int n, sm = 0;
        cin >> n;
        int a[n];
        for (int& i: a) {
            cin >> i;
            sm += i;
        }
        for (int i = 0; i < n; i++) {
            auto p = m.find(sm - a[i]);
            if (p != m.end()) {
                auto pos = p->S;
                if (pos.F != r) {
                    YES
                    cout << pos.F << ' ' << pos.S << nl;
                    cout << r << ' ' << i + 1 << nl;
                    return;
                }
            }

            m[sm - a[i]] = {r, i + 1};
        }
    }

    NO
}

int32_t main() {
    fast
    solve();
}
