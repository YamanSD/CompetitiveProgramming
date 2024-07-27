/**
 * 14:38:02 7/24/24
 * C-A
 */
// ./CodeForces/Div2-961/C-A.cpp
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
#define NO (cout << "NO" << nl);
#define YES (cout << "YES" << nl);
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define EPS 1e-9l
#define pii pair<int, int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        bool non = false, fail = false;
        for (int& i: a) {
            cin >> i;
            if (i != 1) non = true;
            else if (non) fail = true;
        }
        if (fail) {
            cout << -1 << nl;
            continue;
        }
        vector<int> op(n, 0);

        for (int i = 1; i < n; i++) {
            int prev = a[i - 1];
            int cur = a[i];
            int ex = 0;
            while (prev != 1 and prev * prev <= cur) ex--, prev *= prev;
            while (cur < prev) ex++, cur *= cur;
            op[i] = max(0ll, op[i - 1] + ex);
        }

        int res = 0;
        for (int i: op) res += i;
        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
