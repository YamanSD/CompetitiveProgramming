/**
 * BinaryColouring
 * 7:17 PM 5/31/2024
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
    int t, x;
    vector<int> res;
    cin >> t;

    while (t--) {
        cin >> x;
        res = vector<int>(31, 0);

        for (int i = 0; i < 30; i++) {
            if ((x >> i) % 2) {
                if (res[i]) {
                    res[i + 1] = 1;
                    res[i] = 0;
                } else if (i > 0) {
                    if (res[i - 1] == 1) {
                        res[i + 1] = 1;
                        res[i - 1] = -1;
                    } else {
                        res[i] = 1;
                    }
                } else if (i == 0) {
                    res[i] = 1;
                }
            }
        }

        cout << 31 << nl;
        for (auto i: res) {
            cout << i << ' ';
        }
        cout << nl;
    }
}
