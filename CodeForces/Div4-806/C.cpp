/**
 * 14:55:10 8/5/24
 * C
 */
// ./CodeForces/Div4-806/C.cpp
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
        int n;
        cin >> n;
        int a[n];
        vector<pair<int, string>> mv(n);
        for (int& i: a) cin >> i;
        for (auto& p: mv) cin >> p.F >> p.S;
        for (int i = 0; i < n; i++) {
            for (char c: mv[i].S) {
                if (c == 'D') {
                    a[i]++;
                    a[i] %= 10;
                } else {
                    a[i]--;
                    if (a[i] < 0) {
                        a[i] = 9;
                    }
                }
            }
        }
        for (int i: a) cout << i << ' ';
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
