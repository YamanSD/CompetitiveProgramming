/**
 * 19:23:23 7/29/24
 * Quadrants
 */
// ./ICPC/Quadrants.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    double x, y;
    vector<string> res;
    while (true) {
        cin >> x >> y;
        if (x == 0 or y == 0) {
            res.emplace_back("AXIS");
            if (x == 0 and y == 0) break;
        } else if (x > 0) {
            if (y > 0) {
                res.emplace_back("Q1");
            } else {
                res.emplace_back("Q4");
            }
        } else {
            if (y > 0) {
                res.emplace_back("Q2");
            } else {
                res.emplace_back("Q3");
            }
        }
    }
    for (auto& s: res) cout << s << nl;
}

int32_t main() {
    fast
    solve();
}
