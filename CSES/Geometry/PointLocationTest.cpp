/**
 * 15:40:16 7/8/24
 * PointLocationTest
 */
// ./CSES/Geometry/PointLocationTest.cpp
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

int crossProd(P p0, P p1) {
    return (conj(p0) * p1).Y;
}

int pointLinePos(P p1, P p2, P p3) {
    return crossProd(p3 - p1, p3 - p2);
}

void solve() {
    int t, x1, y1, x2, y2, x3, y3;
    cin >> t;

    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        P p1{x1, y1}, p2{x2, y2}, p3{x3, y3};

        int d = crossProd(p3 - p1, p3 - p2);

        if (d < 0) {
            cout << "RIGHT" << nl;
        } else if (d > 0) {
            cout << "LEFT" << nl;
        } else {
            cout << "TOUCH" << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
