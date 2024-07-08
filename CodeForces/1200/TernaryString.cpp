/**
 * 10:59:05 7/8/24
 * TernaryString
 */
// ./CodeForces/1200/TernaryString.cpp
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
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        vector<pii> v;
        char prev = s[0];
        int cnt = 0;
        for (char c : s) {
            if (c == prev) {
                cnt++;
            } else {
                v.emplace_back(prev - '0', cnt);
                cnt = 1;
                prev = c;
            }
        }
        v.emplace_back(prev - '0', cnt);

        int mn = INF;
        for (int i = 1; i < v.size() - 1; i++) {
            if (v[i - 1].F != v[i + 1].F) {
                mn = min(mn, v[i].S + 2);
            }
        }

        if (mn == INF) cout << 0 << nl;
        else cout << mn << nl;
    }
}

int32_t main() {
    fast
    solve();
}
