/**
 * 16:55:18 7/8/24
 * PointInPolygon
 */
// ./CSES/Geometry/PointInPolygon.cpp
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

struct Point {
    int x, y;
    Point(int x, int y): x{x}, y{y} {}
    Point operator +(const Point& b) const { return Point{x+b.x, y+b.y}; }
    Point operator -(const Point& b) const { return Point{x-b.x, y-b.y}; }
    int operator *(const Point& b) const { return x * b.y - y * b.x; }
    bool operator ==(const Point& b) const { return x == b.x and y == b.y; }
    void operator +=(const Point& b) { x += b.x; y += b.y; }
    void operator -=(const Point &b) { x -= b.x; y -= b.y; }
    void operator *=(const int k) { x *= k; y *= k; }

    [[nodiscard]] int cross(const Point& b, const Point& c) const {
        return (b - *this) * (c - *this);
    }
};

bool pointlineintersect(Point P1, Point P2, Point P3){
    if(P2.cross(P1, P3) != 0)   return false;
    return (min(P2.x, P3.x) <= P1.x && P1.x <= max(P2.x, P3.x))
           && (min(P2.y, P3.y) <= P1.y && P1.y <= max(P2.y, P3.y));
}

int pointinpolygon(Point p, const vector<Point>& poly) {
    int n = poly.size(), cnt = 0;
    bool boundary = false;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;

        if (pointlineintersect(p, poly[i], poly[j])) {
            boundary = true;
        }

        if (
                (poly[i].x <= p.x and p.x < poly[j].x and p.cross(poly[i], poly[j]) < 0)
                or (poly[j].x <= p.x and p.x < poly[i].x and p.cross(poly[j], poly[i]) < 0)
        ) {
            cnt++;
        }
    }

    if (boundary) {
        return 0;
    } else if (cnt % 2) {
        return -1;
    } else {
        return 1;
    }
}


void solve() {
    int n, m, x, y;
    cin >> n >> m;
    vector<Point> poly;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        poly.emplace_back(x, y);
    }
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        Point p{x, y};

        switch (pointinpolygon(p, poly)) {
            case -1:
                cout << "INSIDE" << nl;
                break;
            case 0:
                cout << "BOUNDARY" << nl;
                break;
            case 1:
                cout << "OUTSIDE" << nl;
                break;
        }
    }
}

int32_t main() {
    fast
    solve();
}
