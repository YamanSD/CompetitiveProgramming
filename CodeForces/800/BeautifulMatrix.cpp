/**
 * BeautifulMatrix
 * 5:40 PM 6/5/2024
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
    int x = -1, y, v;
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            cin >> v;

            if (v) {
                x = r + 1, y = c + 1;
                break;
            }
        }

        if (x != -1) {
            break;
        }
    }

    cout << abs(x - 3) + abs(y - 3) << nl;
}
