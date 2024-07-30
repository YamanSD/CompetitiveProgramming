/**
 * 13:21:59 7/30/24
 * TwoMovies
 */
// ./CodeForces/1400/TwoMovies.cpp
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
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int& i: a) cin >> i;
        for (int& i: b) cin >> i;
        int p = 0, m = 0, x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1 and b[i] == 1) p++;
            else if (a[i] == -1 and b[i] == -1) m++;
            else if (a[i] > b[i]) x += a[i];
            else if (a[i] <= b[i]) y += b[i];
        }

        while (p--) {
            if (x > y) y++;
            else x++;
        }

        while (m--) {
            if (x > y) x--;
            else y--;
        }

        cout << min(x, y) << nl;
    }
}

int32_t main() {
    fast
    solve();
}
