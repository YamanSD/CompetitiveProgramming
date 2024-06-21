/**
 * 16:42:21 6/21/24
 * AlternatingSubsequence
 */
// ./CodeForces/1200/AlternatingSubsequence.cpp
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

int sign(int x) {
    return x < 0 ? -1 : 1;
}

void solve() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n], sm = 0;
        for (int& i: a) cin >> i;

        for (int i = 0; i < n; i++) {
            int cur = a[i];
            int j = i;

            while (j < n and sign(a[i]) == sign(a[j])) {
                cur = max(cur, a[j++]);
            }

            sm += cur;
            i = j - 1;
        }
        cout << sm << nl;
    }
}

int32_t main() {
    fast
    solve();
}
