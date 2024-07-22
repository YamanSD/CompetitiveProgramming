/**
 * 14:14:04 7/15/24
 * FrogJumps
 */
// ./CodeForces/1100/FrogJumps.cpp
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
        string s;
        cin >> s;
        vector<int> a{0};
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') {
                a.push_back(i + 1);
            }
        }
        a.push_back(s.size() + 1);
        int mx = -1;
        for (int i = 0; i < a.size() - 1; i++) {
            mx = max(mx, a[i + 1] - a[i]);
        }
        cout << mx << nl;
    }
}

int32_t main() {
    fast
    solve();
}
