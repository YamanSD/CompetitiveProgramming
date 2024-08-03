/**
 * 19:20:32 8/2/24
 * MiddleClass
 */
// ./CodeForces/1100/MiddleClass.cpp
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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int& i: a) cin >> i;
        sort(a, a + n);
        int sm = 0, cnt = 0;
        while (cnt < n and ((double)sm + a[n - 1 - cnt]) / (cnt + 1) >= x) {
            sm += a[n - 1 - cnt];
            cnt++;
        }
        cout << cnt << nl;
    }
}

int32_t main() {
    fast
    solve();
}
