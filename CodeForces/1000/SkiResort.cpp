/**
 * 15:54:48 7/27/24
 * SkiResort
 */
// ./CodeForces/1000/SkiResort.cpp
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

int sumn(int n) {
    return (n * (n + 1)) / 2;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        int a[n];
        for (int& i: a) cin >> i;
        int b = 0, l = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                l++;
            }

            if (a[i] > q or i == n - 1) {
                if (l >= k) {
                    b += (l + 1) * (l - k + 1) - (sumn(l) - sumn(k - 1));
                }
                l = 0;
            }
        }
        cout << b << nl;
    }
}

int32_t main() {
    fast
    solve();
}
