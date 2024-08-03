/**
 * 16:23:56 8/2/24
 * OlyaAndGameWithArrays
 */
// ./CodeForces/1000/OlyaAndGameWithArrays.cpp
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
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n);
        for (auto& v: a) {
            int sz = 0;
            cin >> sz;
            v.resize(sz);
            for (int& i: v) {
                cin >> i;
            }
            std::sort(v.begin(), v.end());
        }
        int m0 = INF, m1 = INF;
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            m0 = min(m0, a[i][0]);
            m1 = min(m1, a[i][1]);
            res[i] = a[i][1];
        }
        int ans = m0 - m1;
        for (int i: res) ans += i;
        cout << ans << nl;
    }
}

int32_t main() {
    fast
    solve();
}
