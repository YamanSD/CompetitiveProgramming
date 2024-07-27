/**
 * 13:45:52 7/26/24
 * C
 */
// ./CodeForces/Div3-490/C.cpp
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
    int n, k;
    string s;
    cin >> n >> k >> s;
    map<char, int> m;
    for (char c: s) m[c]++;
    for (auto& p: m) {
        if (k == 0) break;
        int t = p.S;
        p.S = max(0ll, p.S - k);
        k = max(0ll, k - t);
    }
    string res;
    for (char c: views::reverse(s)) {
        if (m[c]) {
            res.push_back(c);
            m[c]--;
        }
    }
    reverse(res.begin(), res.end());
    cout << res << nl;
}

int32_t main() {
    fast
    solve();
}
