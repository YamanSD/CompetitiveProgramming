/**
 * SubsequenceHate
 * 1:16 PM 6/11/2024
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
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int t;
    string s;
    cin >> t;

    while (t--) {
        cin >> s;
        int suf0 = 0, suf1 = 0;
        for (char c: s) {
            suf0 += (c == '0');
            suf1 += (c == '1');
        }

        int ans = min(suf0, suf1);
        int pref0 = 0, pref1 = 0;

        for (char c: s) {
            pref0 += (c == '0');
            suf0 -= (c == '0');
            pref1 += (c == '1');
            suf1 -= (c == '1');
            ans = min(ans, pref1 + suf0);
            ans = min(ans, pref0 + suf1);
        }

        cout << ans << endl;
    }
}
