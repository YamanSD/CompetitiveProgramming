/**
 * LeftAndRightHouses
 * 12:34 PM 6/3/2024
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
    int t, n;
    string s;
    cin >> t;

    while (t--) {
        cin >> n >> s;
        int suf_cnt[n + 1];
        memset(suf_cnt, 0, sizeof(int) * (n + 1));

        for (int i = n - 1; 0 <= i; i--) {
            suf_cnt[i] = suf_cnt[i + 1] + (s[i] == '1');
        }

        int pref_cnt = 0,
            opt_ans = -1,
            opt_dist = 2 * n;

        for (int i = 0; i <= n; i++) {
            if (pref_cnt >= (i + 1) / 2 and suf_cnt[i] >= (n - i + 1) / 2 and abs(n - 2 * i) < opt_dist) {
                opt_dist = abs(n - 2 * i);
                opt_ans = i;
            }

            if (i != n) {
                pref_cnt += (s[i] == '0');
            }
        }

        cout << opt_ans << nl;
    }
}
