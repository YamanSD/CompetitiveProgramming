/**
 * 19:47:28 7/29/24
 * CrossedLadders
 */
// ./ICPC/CrossedLadders.cpp
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
    double x, y, c;
    cin >> x >> y >> c;

//     w * w = y * y - h1 * h1
//     w * w = x * x - h0 * h0
    // x = k * v;
    // y = k * v1;
    // h1 = k * h0
    // y * y - h1 * h1 = x * x - h0 * h0
    // y * y - k * k * h0 * h0 = x * x - h0 * h0

    // h0 * h0 * (1 - k * k) = x * x - y * y
    // 2 * w * w = y * y
    // y * y - h1 * h1 = 0
    // h1 * h1 = y * y
    // h1 = sqrt(y * y)

}

int32_t main() {
    fast
    solve();
}
