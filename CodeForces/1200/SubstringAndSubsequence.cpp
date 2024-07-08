/**
 * 12:52:01 7/2/24
 * SubstringAndSubsequence
 */
// ./CodeForces/1200/SubstringAndSubsequence.cpp
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
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int res = a.size() + b.size();

        for (int ib = 0; ib < b.size(); ib++) {
            int ptr = ib;
            for (char ca : a) {
                if (ptr < b.size() and ca == b[ptr]) ptr++;
            }
            res = min(res, (int)(a.size() + b.size()) - ptr + ib);
        }
        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
