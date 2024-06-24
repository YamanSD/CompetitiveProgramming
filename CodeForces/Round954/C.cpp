/**
 * 12:05:29 6/24/24
 * C
 */
// ./CodeForces/Round954/C.cpp
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
    int t, n, m;
    string s, c;
    cin >> t;

    while (t--) {
        cin >> n >> m >> s;
        int ind[m];
        for (int& i: ind) cin >> i;
        cin >> c;
        set<int> si;
        for (int i: ind) si.insert(i);
        std::sort(c.begin(), c.end());

        int ic = 0;
        for (int i: si) {
            s[i - 1] = c[ic++];
        }

        cout << s << nl;
    }
}

int32_t main() {
    fast
    solve();
}
