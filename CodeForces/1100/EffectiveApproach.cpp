/**
 * 13:00:03 7/20/24
 * EffectiveApproach
 */
// ./CodeForces/1100/EffectiveApproach.cpp
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
#define pii pair<int, int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, m;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;
    cin >> m;
    int q[m];
    for (int& i: q) cin >> i;

    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        mp[a[i - 1]] = i;
    }

    int v = 0, p = 0;
    for (int i: q) {
        v += mp[i];
        p += n - mp[i] + 1;
    }
    cout << v << ' ' << p << nl;
}

int32_t main() {
    fast
    solve();
}
