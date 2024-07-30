/**
 * 13:07:35 7/29/24
 * C
 */
// ./CodeForces/Pinely-R4/C.cpp
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

/*
 * 80 40 20 10  : 38, 150
 * 42 2  16 26  : 22, 86
 * 20 20 8  4   : 13, 52
 * 7  7  5  9   : 7 , 30
 * 0  0  2  2   : 1 , 4
 * 1  1  1  1   : 1 , 4
 * 0  0  0  0   : 0 , 0
 */

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[n];
        for (int& i: a) cin >> i;
        bool has_odd = false, has_even = false;

        for (int i: a) {
            if (i % 2) {
                has_odd = true;
            } else {
                has_even = true;
            }
        }

        if (has_even and has_odd) {
            cout << -1 << nl;
        } else {
            vector<int> x;
            for (int i = 29; i >= 0; i--) {
                x.push_back(1 << i);
            }

            if (has_even) {
                x.push_back(1);
            }

            cout << x.size() << nl;
            for (int i: x) cout << i << ' ';
            cout << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
