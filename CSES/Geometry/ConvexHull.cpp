/**
 * 23:35:33 7/12/24
 * ConvexHull
 */
// ./CSES/Geometry/ConvexHull.cpp
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

struct Point {
    int x, y;
    Point operator +(const Point& b) const { return Point{x+b.x, y+b.y}; }
    Point operator -(const Point& b) const { return Point{x-b.x, y-b.y}; }
    int operator *(const Point& b) const { return x * b.y - y * b.x; }
    bool operator ==(const Point& b) const { return x == b.x and y == b.y; }
    bool operator <(const Point& b) const { return x == b.x ? y < b.y : x < b.x; }
    void operator +=(const Point& b) { x += b.x; y += b.y; }
    void operator -=(const Point &b) { x -= b.x; y -= b.y; }
    void operator *=(const int k) { x *= k; y *= k; }

    [[nodiscard]] int cross(const Point& b, const Point& c) const {
        return (b - *this) * (c - *this);
    }
};

void solve() {
    int n, x, y;
    cin >> n;
    Point p[n];
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        p[i] = {x, y};
    }
    sort(p, p + n);
    vector<Point> hull;
    int s = 0;

    for (int t = 0; t < 2; t++) {
        for (int i = 0; i < n; i++) {
            while (hull.size() - s >= 2) {
                Point p1 = hull[hull.size()-2];
                Point p2 = hull[hull.size()-1];
                if (p1.cross(p2, p[i]) <= 0) break;
                hull.pop_back();
            }

            hull.push_back(p[i]);
        }
        hull.pop_back();
        s = hull.size();
        reverse(p, p + n);
    }

    cout << s << nl;
    for (auto& i: hull) cout << i.x << ' ' << i.y << nl;
}

int32_t main() {
    fast
    solve();
}
