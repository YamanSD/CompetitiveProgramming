/**
 * 15:52:10 7/22/24
 * PairOfTopics
 */
// ./CodeForces/1400/PairOfTopics.cpp
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
    int n;
    cin >> n;
    int a[n], v;
    for (int&i: a) cin >> i;
    for (int&i: a) {
        cin >> v;
        i -= v;
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int j = lower_bound(a + i + 1, a + n, 1 - a[i]) - a;
        cnt += n - j;
    }
    cout << cnt << nl;
}

int32_t main() {
    fast
    solve();
}
