/**
 * 17:17:47 6/23/24
 * A
 */
// ./CodeForces/Round954/A.cpp
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
    int t, x0, x1, x2;
    cin >> t;

    while (t--) {
        cin >> x0 >> x1 >> x2;
        int mn = INF;
        for (int i = 1; i <= 10; i++) {
            mn = min(abs(i - x0) + abs(i - x1) + abs(i - x2), mn);
        }

        cout << mn << nl;
    }
}

int32_t main() {
    fast
    solve();
}
