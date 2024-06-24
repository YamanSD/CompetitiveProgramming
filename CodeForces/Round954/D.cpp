/**
 * 12:31:30 6/24/24
 * D
 */
// ./CodeForces/Round954/D.cpp
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
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t, n;
    string s;
    cin >> t;

    while (t--) {
        cin >> n >> s;
        int res = INF;

        for (int l = 0; l < n - 1; l++) {
            int tmp = stoll(s.substr(l, 2));

            if (tmp == 0) {
                res = 0;
            }

            if (res == 0) {
                break;
            }

            for (int i = 0; i < n; i++) {
                if (i == l) {
                    i++;
                } else {
                    if (s[i] == '0') {
                        tmp = 0;
                        break;
                    } else if (s[i] != '1') {
                        tmp = min(tmp + (s[i] - '0'), tmp * (s[i] - '0'));
                    }
                }
            }
            res = min(res, tmp);
        }

        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
