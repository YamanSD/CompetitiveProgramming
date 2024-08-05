/**
 * 16:06:45 8/5/24
 * F
 */
// ./CodeForces/Div4-806/F.cpp
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int& i: a) cin >> i;
        vector<int> pre(n + 1, 0);
        vector<pii> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = {a[i], i};
        }
        std::sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + (v[i].F < v[i].S + 1);
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            if (v[i].F < v[i].S + 1) {
                int j = lower_bound(v.begin() + i + 1, v.end(), pii{v[i].S + 2, -INF}) - v.begin();
                res += pre[n] - pre[j];
            }
        }
        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
