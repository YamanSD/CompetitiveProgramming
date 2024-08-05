/**
 * 14:37:07 8/4/24
 * B
 */
// ./CodeForces/Div2-963/B.cpp
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
        for (int& i: a) cin >> i;
        int mx = 0, ecnt = 0, mxo = 0;
        for (int i: a) {
            if (i % 2) {
                mxo = max(mxo, i);
            } else {
                ecnt++;
            }
            mx = max(mx, i);
        }
        if (mxo == 0) {
            cout << 0 << nl;
        } else if (mx == mxo) {
            cout << ecnt << nl;
        } else { // mx is even
            sort(a, a + n);
            int cnt = 0;
            for (int& i: a) {
                if (i % 2 == 0 and i < mxo) {
                    i += mxo;
                    mxo = max(i, mxo);
                    mx = max(mx, mxo);
                    cnt++;
                    ecnt--;
                }
            }
            if (mx == mxo) {
                cout << cnt + ecnt << nl;
            } else {
                cout << cnt + ecnt + 1 << nl;
            }
        }
    }
}

int32_t main() {
    fast
    solve();
}
