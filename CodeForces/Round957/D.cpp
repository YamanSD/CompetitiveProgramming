/**
 * 18:05:21 7/11/24
 * D
 */
// ./CodeForces/Round957/D.cpp
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
        int n, m, k;
        cin >> n >> m >> k;
        char r[n];
        for (char& c: r) cin >> c;

        int i = -1;
        bool fail = false;
        while (i < n) {
            if (i != -1 and r[i] == 'C') {
                fail = true;
                break;
            }

            int l = -1;
            if ((i == -1 or r[i] == 'L') and m) {
                if (i + m >= n) break;

                for (int j = i + 1; j < n and j <= i + m; j++) {
                    if (r[j] == 'L') l = j;
                }
            }

            if (l == -1) {
                if ((i == -1 or r[i] == 'L') and m) {
                    if (i + m >= n) break;

                    for (int j = i + 1; j < n and j <= i + m; j++) {
                        if (r[j] == 'W') l = j;
                    }

                    if (l == -1) {
//                        cout << "HERE" << nl;
                        fail = true;
                        break;
                    }
                    i = l;
                } else if (r[i] == 'W') {
                    if (k == 0) {
                        fail = true;
                        break;
                    }
                    i++;
                    k--;
                }
            } else {
                i = l;
            }
        }

        if (fail) NO else YES
    }
}

int32_t main() {
    fast
    solve();
}
