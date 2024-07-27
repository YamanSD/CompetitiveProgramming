/**
 * 13:12:04 7/24/24
 * C
 */
// ./CodeForces/Div2-961/C.cpp
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
        double a[n];
        bool non = false, fail = false;
        for (double& i: a) {
            cin >> i;
            if (i != 1) non = true;
            else if (non) fail = true;
            i = log(log(i));
        }
        if (fail) {
            cout << -1 << nl;
            continue;
        }

        int res = 0;
        for (int i = 1; i < n; i++) {
            double d = a[i - 1] - a[i];
            if (d > EPS) {
                int cnt = 1.0l + (d - EPS) / log(2);
                res += cnt;
                a[i] += cnt * log(2);
            }
        }
        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
