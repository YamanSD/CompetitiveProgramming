/**
 * 16:56:36 7/20/24
 * NumberOfWays
 */
// ./CodeForces/1700/NumberOfWays.cpp
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
    int a[n];
    for (int& i: a) cin >> i;
    int pre[n + 1];
    pre[0] = 0;
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + a[i];
    }
    if (pre[n] % 3) {
        cout << 0 << nl;
        return;
    }

    int s = pre[n] / 3;
    int ss = s + s;
    int cnt = 0, res = 0;
    for (int i = 1; i < n; i++) {
        if (pre[i] == ss) {
            res += cnt;
        }

        if (pre[i] == s) {
            cnt++;
        }
    }
    cout << res << nl;
}

int32_t main() {
    fast
    solve();
}
