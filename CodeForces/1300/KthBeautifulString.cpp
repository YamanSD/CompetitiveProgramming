/**
 * 13:45:21 7/22/24
 * KthBeautifulString
 */
// ./CodeForces/1300/KthBeautifulString.cpp
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

int tri(int n) {
    return (n * (n + 1)) / 2;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, pm;
        cin >> n >> k;
        string s(n, 'a');

        int m = 1, j = 1;
        while (m <= k) {
            pm = m;
            m += j;
            j++;
        }

        int pos = j;
        s[n - (k - pm + 1)] = 'b';
        s[n - pos] = 'b';
        cout << s << nl;
    }
}

int32_t main() {
    fast
    solve();
}
