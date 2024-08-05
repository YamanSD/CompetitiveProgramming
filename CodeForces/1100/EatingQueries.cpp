/**
 * 19:14:35 8/3/24
 * EatingQueries
 */
// ./CodeForces/1100/EatingQueries.cpp
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
        int n, q;
        cin >> n >> q;
        int a[n], qs[q];
        for (int& i: a) cin >> i;
        for (int& i: qs) cin >> i;
        sort(a, a + n);
        vector<int> pre(n + 1);
        for (int i = n - 1; i >= 0; i--) {
            pre[i] = pre[i + 1] + a[i];
        }
        pre.pop_back();
        std::reverse(pre.begin(), pre.end());
        for (int i: qs) {
            int j = lower_bound(pre.begin(), pre.end(), i) - pre.begin();
            if (j == n) cout << -1 << nl;
            else cout << j + 1 << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
