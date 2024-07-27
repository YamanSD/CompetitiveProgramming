/**
 * 17:26:33 7/23/24
 * A
 */
// ./CodeForces/Div2-961/A.cpp
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
        int n, k;
        cin >> n >> k;
//        int mxd = 2 * n - 1;
        int cur = 0, d = 0, kk = 0;
        bool p = true;
        while (k--) {
            kk++;
            if (kk > cur) {
                d++;
                if (cur == 0) {
                    cur = n;
                } else {
                    if (p and cur != n) {
                        p = false;
                    } else {
                        p = true;
                        cur--;
                    }
                }
                kk = 1;
            }
        }
        cout << d << nl;
    }
}

int32_t main() {
    fast
    solve();
}
