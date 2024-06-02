/**
 * BessieAndMEX
 * 11:54 AM 6/2/2024
 */
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    fast
    // p_i + a_i = MEX(p_1 -> p_i)
    int t, n, mex;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n], p[n];
        bool has[n + 1];
        memset(has, false, sizeof(has[0]) * (n + 1));
        mex = 0;

        for (int& i: a) {
            cin >> i;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] >= 0) {
                p[i] = mex;
            } else {
                p[i] = mex - a[i];
            }

            has[p[i]] = true;
            while (has[mex]) {
                mex++;
            }
        }

        for (int i: p) {
            cout << i << ' ';
        }

        cout << nl;
    }
}
