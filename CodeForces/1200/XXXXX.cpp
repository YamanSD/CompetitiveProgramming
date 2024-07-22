/**
 * 23:18:28 7/16/24
 * XXXXX
 */
// ./CodeForces/1200/XXXXX.cpp
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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int& i: a)cin>> i;
        int sm = 0, l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] % x and l == -1) l = i;
            sm += a[i];
        }
        for (int i = n - 1; i>=0; i--) {
            if (a[i] % x) {
                r = i;
                break;
            }
        }

        if (sm % x) {
            cout << n << nl;
        } else {
            if (l == -1 and r == -1) {
                cout << -1 << nl;
            } else {
                cout << max(n - l - 1, r) << nl;
            }
        }
    }
}

int32_t main() {
    fast
    solve();
}
