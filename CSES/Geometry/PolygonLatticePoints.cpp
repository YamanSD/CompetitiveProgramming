/**
 * 16:56:54 7/10/24
 * PolygonLatticePoints
 */
// ./CSES/Geometry/PolygonLatticePoints.cpp
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

    Point(int x, int y) : x{x}, y{y} {}

    Point operator+(const Point &b) const { return Point{x + b.x, y + b.y}; }

    Point operator-(const Point &b) const { return Point{x - b.x, y - b.y}; }

    int operator*(const Point &b) const { return x * b.y - y * b.x; }

    bool operator==(const Point &b) const { return x == b.x and y == b.y; }

    void operator+=(const Point &b) {
        x += b.x;
        y += b.y;
    }

    void operator-=(const Point &b) {
        x -= b.x;
        y -= b.y;
    }

    void operator*=(const int k) {
        x *= k;
        y *= k;
    }

    int cross(const Point &b, const Point &c) const {
        return (b - *this) * (c - *this);
    }
};

void solve() {
    int n;
    cin >> n;
    int x[n + 1], y[n + 1];
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    x[n] = x[0], y[n] = y[0];

    int area = 0;
    for (int i = 0; i < n; i++) {
        area += x[i] * y[i + 1] - y[i] * x[i + 1];
    }
    area = abs(area);

    int bounds = 0;
    for (int i = 0; i < n; i++) {
        if (x[i + 1] == x[i]) {
            bounds += abs(y[i + 1] - y[i]);
        } else if (y[i + 1] == y[i]) {
            bounds += abs(x[i + 1] - x[i]);
        } else {
            bounds += gcd(abs(x[i + 1] - x[i]), abs(y[i + 1] - y[i]));
        }
    }

    cout << (area + 2 - bounds) / 2 << ' ' << bounds << nl;
}

int32_t main() {
    fast
    solve();
}
