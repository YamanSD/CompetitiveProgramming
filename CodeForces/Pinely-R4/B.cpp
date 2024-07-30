/**
 * 12:35:52 7/29/24
 * B
 */
// ./CodeForces/Pinely-R4/B.cpp
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
    // 3 5 4 2

    // 3 3 - - -
    // 3 7 5 - -
    // 3 7 5 4 -
    // 3 7 5 6 2
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int& i: b) cin >> i;
        a[0] = a[1] = b[0];

        bool fail = false;
        for (int i = 1; i < n - 1; i++) {
            if ((a[i] & b[i]) != b[i]) {
                a[i] |= b[i];

                if ((a[i] & a[i - 1]) != b[i - 1]) {
                    fail = true;
                    break;
                }
            }

            a[i + 1] = b[i];
        }

        if (fail) {
            cout << -1;
        } else {
            for (int i: a) cout << i << ' ';
//            cout << nl;
//            for (int i = 0; i < n - 1; i++) {
//                cout << (a[i] & a[i + 1]) << ' ';
//            }
        }
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
