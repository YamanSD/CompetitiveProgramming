/**
 * CoinGames
 * 11:00 AM 5/30/2024
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
    int t, n, cnt;
    char c;
    cin >> t;

    while (t--) {
        cin >> n;
        cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> c;

            if (c == 'U') {
                cnt++;
            }
        }

        cout << (cnt % 2 ? "YES" : "NO") << nl;
    }
}
