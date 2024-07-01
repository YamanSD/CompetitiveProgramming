/**
 * 15:46:25 6/25/24
 * Worms
 */
// ./CodeForces/1200/Worms.cpp
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
    int n, m, q;
    cin >> n;
    int a[n];
    vector<int> pre(n + 1, 0);
    for (int& i: a) cin >> i;
    cin >> m;
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    while (m--) {
        cin >> q;
        cout << (std::lower_bound(pre.begin(), pre.end(), q) - pre.begin()) << nl;
    }
}

int32_t main() {
    fast
    solve();
}
