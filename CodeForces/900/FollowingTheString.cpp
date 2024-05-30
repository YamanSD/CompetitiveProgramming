/**
 * FollowingTheString
 * 2:09 PM 5/30/2024
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
    int t, n, a, cnts[26];
    string res;
    cin >> t;

    while (t--) {
        cin >> n;
        res.clear();
        memset(cnts, 0, sizeof(int) * 26);

        for (int i = 0; i < n; i++) {
            cin >> a;

            for (int j = 0; j < 26; j++) {
                if (cnts[j] == a) {
                    res += char('a' + j);
                    cnts[j]++;
                    break;
                }
            }
        }

        cout << res << nl;
    }
}
