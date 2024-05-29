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
    int t, n;
    bool passed[26];
    char c;
    string s, s0;
    cin >> t;

    while (t--) {
        cin >> n;
        s = "";
        s0 = "";
        memset(passed, false, 26);

        for (int i = 0; i < n; i++) {
            cin >> c;
            s0 += c;
            passed[c - 'a'] = true;
        }

        for (int i = 0; i < 26; i++) {
            if (passed[i]) {
                s += char('a' + i);
            }
        }

        for (int i = 0; i < n; i++) {
            cout << *(s.rbegin() + s.find(s0[i]));
        }

        cout << nl;
    }
}
