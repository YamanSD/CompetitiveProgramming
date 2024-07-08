/**
 * 13:49:46 7/8/24
 * TernaryXOR
 */
// ./CodeForces/1200/TernaryXOR.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t, n;
    string s, a, b;
    cin >> t;

    while (t--) {
        cin >> n >> s;
        a = string(n, '0'), b = string(n, '0');
        bool ah = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (ah) {
                    a[i] = '1';
                    ah = false;
                } else {
                    b[i] = '1';
                }
            } else if (s[i] == '2') {
                if (ah) {
                    a[i] = b[i] = '1';
                } else {
                    b[i] = '2';
                }
            }
        }

        cout << a << nl << b << nl;
    }
}

int32_t main() {
    fast
    solve();
}
