/**
 * 14:42:00 6/24/24
 * D
 */
// ./CodeForces/Round953/D.cpp
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
    int t, n, c;
    cin >> t;
    while (t--) {
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << "0\n";
            continue;
        }

        int mx = *max_element(a.begin() + 1, a.end());
        int mxc = max(a[0] + c, mx);
        int winner = mxc == a[0] + c ? 0 : find(a.begin() + 1, a.end(), mx) - a.begin();
        int sum = c;
        for (int i = 0; i < n; sum += a[i], ++i) {
            int answer;
            if (i == winner) {
                answer = 0;
            } else if (sum + a[i] >= mx) {
                answer = i;
            } else {
                answer = i + 1;
            }
            cout << answer << " \n"[i == n - 1];
        }
    }
}

int32_t main() {
    fast
    solve();
}
