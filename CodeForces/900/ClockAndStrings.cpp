/**
 * ClockAndStrings
 * 11:13 AM 5/30/2024
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
    int t, a, b, c, d;
    string s;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c >> d;
        s = "";

        for (int i = 1; i <= 12; i++) {
            if (i == a or i == b) {
                s += 'a';
            }

            if (i == c or i == d) {
                s += 'b';
            }
        }

        cout << (s == "abab" or s == "baba" ? "YES" : "NO") << nl;
    }
}
