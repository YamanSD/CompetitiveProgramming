/**
 * 17:48:26 7/20/24
 * B
 */
// ./CodeForces/Div2-960/B.cpp
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
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n + 1, 1);

        for (int i = (y % 2 == 0); i < y; i += 2) a[i] = -1;
        for (int i = x + 1; i <= n; i += 2) a[i] = -1;

        for (int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << nl;
    }
}
/*

4
2 2 1
4 4 3
6 5 1
6 4 3

*/

int32_t main() {
    fast
    solve();
}
