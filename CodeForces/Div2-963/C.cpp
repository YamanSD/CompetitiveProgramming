/**
 * 21:37:27 8/4/24
 * C
 */
// ./CodeForces/Div2-963/C.cpp
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
        int n, k;
        cin >> n >> k;
        int a[n], lst = 1;
        for (int& i: a) {
            cin >> i;
            lst = max(lst, i);
        }

        // F T T T F F F T T T F
        int l = lst, r = lst + k - 1;
        for (int v: a) {
            int d = (lst - v) / k;
            int s = v + (d + (d % 2)) * k;
//            cout << v << " " << s << " " << s + k - 1 << nl;
            l = max(s, l);
            r = min(r, s + k - 1);
        }

        cout << (r < l ? -1 : l) << nl;
    }
}

int32_t main() {
    fast
    solve();
}
