/**
 * 15:17:09 7/13/24
 * NotAdjacentMatrix
 */
// ./CodeForces/1000/NotAdjacentMatrix.cpp
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
        int n;
        cin >> n;
        if (n == 2) {
            cout << -1 << nl;
            continue;
        }

        int r = 1;
        for (int i = 2; i <= n * n; i += 2, r++) {
            cout << i << ' ';
            if (r % n == 0) cout << nl;
        }
        for (int i = 1; i <= n * n; i += 2, r++) {
            cout << i << ' ';
            if (r % n == 0) cout << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
