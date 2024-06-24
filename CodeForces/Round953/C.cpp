/**
 * 13:58:19 6/24/24
 * C
 */
// ./CodeForces/Round953/C.cpp
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
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

int smn(int n) { return (n * (n + 1)) / 2; }

void solve() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int maxk = 0;
        for (int i = 0; i < n; i++) maxk += abs(n - 1 - 2 * i);
        if (k % 2 or maxk < k) {
            cout << "NO" << nl;
            continue;
        }
        vector<int> p(n);
        k /= 2;
        iota(p.begin(), p.end(), 0);
        for (int i = 0; 0 < k; i++) {
            if (k >= n - 1 - 2 * i) {
                swap(p[i], p[n - 1 - i]);
                k -= n - 1 - 2 * i;
            } else {
                swap(p[i], p[i + k]);
                k = 0;
            }
        }
        cout << "YES" << nl;
        for (int i: p) cout << i + 1 << ' ';
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
