/**
 * Forked
 * 3:17 PM 5/30/2024
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
    int t, a, b, x1, y1, x2, y2,
    dx[4] = {-1, 1, -1, 1},
    dy[4] = {-1, -1, 1, 1};
    set<pair<int, int>> st1, st2;
    cin >> t;

    while (t--) {
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
        st1.clear();
        st2.clear();

        for(int j = 0; j < 4; j++) {
            st1.insert({x1 + dx[j] * a, y1 + dy[j] * b});
            st2.insert({x2 + dx[j] * a, y2 + dy[j] * b});
            st1.insert({x1 + dx[j] * b, y1 + dy[j] * a});
            st2.insert({x2 + dx[j] * b, y2 + dy[j] * a});
        }

        int ans = 0;
        for(auto x : st1) {
            if (st2.find(x) != st2.end()) {
                ans++;
            }
        }

        cout << ans << nl;
    }
}
