/**
 * 15:50:12 7/8/24
 * LineSegmentIntersection
 */
// ./CSES/Geometry/LineSegmentIntersection.cpp
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
    Point(int x, int y): x{x}, y{y} {}
    Point operator +(const Point& b) const { return Point{x+b.x, y+b.y}; }
    Point operator -(const Point& b) const { return Point{x-b.x, y-b.y}; }
    int operator *(const Point& b) const { return x * b.y - y * b.x; }
    void operator +=(const Point& b) { x += b.x; y += b.y; }
    void operator -=(const Point &b) { x -= b.x; y -= b.y; }
    void operator *=(const int k) { x *= k; y *= k; }

    [[nodiscard]] int cross(const Point& b, const Point& c) const {
        return (b - *this) * (c - *this);
    }
};

bool intersect(Point p1, Point p2, Point p3, Point p4) {
    // Parallel case
    if ((p2 - p1) * (p4 - p3) == 0) {
        // Collinear case, check bounding boxes
        if (p1.cross(p2, p3) == 0) {
            for (int i = 0; i < 2; i++) {
                if (
                    max(p1.x, p2.x) < min(p3.x, p4.x)
                    or max(p1.y, p2.y) < min(p3.y, p4.y)
                ) {
                    return false;
                }

                swap(p1, p3);
                swap(p2, p4);
            }

            return true;
        }

        // Non-collinear parallel lines never intersect
        return false;
    }

    // Non-parallel case
    for (int i = 0; i < 2; i++) {
        int s1 = p1.cross(p2, p3);
        int s2 = p1.cross(p2, p4);

        if ((s1 < 0 and s2 < 0) or (s1 > 0 and s2 > 0)) {
            return false;
        }

        swap(p1, p3);
        swap(p2, p4);
    }

    return true;
}

void solve() {
    int t, x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> t;

    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        if (intersect({x1, y1}, {x2, y2}, {x3, y3}, {x4, y4})) YES else NO
    }
}

int32_t main() {
    fast
    solve();
}
