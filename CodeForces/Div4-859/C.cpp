/**
 * 12:56:08 8/6/24
 * C
 */
// ./CodeForces/Div4-859/C.cpp
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
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
#define LT int T; cin >> T; while (T--)
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    set<char> se, so;
    for (int i = 0; i < n; i++) {
        if (i % 2) {
            so.insert(s[i]);
        } else {
            se.insert(s[i]);
        }
    }
    bool fail = false;
    for (char c: se) {
        if (so.count(c)) {
            fail = true;
            break;
        }
    }
    if (fail) NO else YES
}

int32_t main() {
    fast
    LT solve();
}
