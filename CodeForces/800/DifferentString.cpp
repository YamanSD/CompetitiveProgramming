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
    int t, j;
    string s;
    char ic;
    cin >> t;

    while (t--) {
        cin >> s;
        j = -1;
        ic = s[0];

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ic) {
                j = i;
                break;
            }
        }

        if (j == -1) {
            cout << "NO" << nl;
            continue;
        }

        swap(s[0], s[j]);
        cout << "YES" << nl << s << nl;
    }
}
