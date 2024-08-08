/**
 * 13:32:35 8/7/24
 * IdealPyramid
 */
// ./LCPC/IdealPyramid.cpp
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

int dist(int x0, int y0, int x1, int y1) {
    x0 -= x1, y0 -= y1;
    return floor(sqrt(x0 * x0 + y0 * y0));
}

void solve() {
    int n, minx = INF, maxx = -INF, miny = INF, maxy = -INF;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, h;
        cin >> x >> y >> h;
        int x1 = x + h;
        int x2 = x - h;
        int y1 = y + h;
        int y2 = y - h;
        minx = min(minx, min(x1, x2));
        maxx = max(maxx, max(x1, x2));
        miny = min(miny, min(y1, y2));
        maxy = max(maxy, max(y1, y2));
    }
    int z = max(maxx - minx, maxy - miny);
    if (z % 2) z++;
    maxx = minx + z;
    maxy = miny + z;
    cout << (maxx + minx) / 2 << ' ' << (maxy + miny) / 2 << ' ' << (maxx - minx) / 2 << endl;
}

int32_t main() {
    fast
    solve();
}
