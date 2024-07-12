/**
 * 17:32:24 7/11/24
 * A
 */
// ./CodeForces/Round957/A.cpp
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
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // (a + n0) * (b + n1) * (c + n2)
        int mx = a * b * c;
        for (int n0 = 0; n0 <= 5; n0++) {
            for (int n1 = 0; n1 <= 5 - n0; n1++) {
                for (int n2 = 0; n2 <= 5 - n1 - n0; n2++) {
                    mx = max(mx, (a + n0) * (b + n1) * (c + n2));
                }
            }
        }
        cout << mx << nl;
    }
}

int32_t main() {
    fast
    solve();
}
