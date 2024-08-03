/**
 * 14:29:47 8/2/24
 * SortedAdjacentDifferences
 */
// ./CodeForces/1200/SortedAdjacentDifferences.cpp
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
        int n;
        cin >> n;
        int a[n], res[n];
        for (int& i: a) cin >> i;
        sort(a, a + n);
        int l = (n - 1) / 2;
        int r = l + 1;
        int i = 0;
        while (0 <= l and r < n) {
            res[i++] = a[l--];
            res[i++] = a[r++];
        }
        if (l == 0) res[n - 1] = a[l];
        for (int v: res) cout << v << ' ';
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
