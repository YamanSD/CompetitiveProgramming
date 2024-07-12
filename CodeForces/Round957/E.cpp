/**
 * 18:51:08 7/11/24
 * E
 */
// ./CodeForces/Round957/E.cpp
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
    int t, mx = 1'000'000;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s, s0{to_string(n)};
        while (s.length() <= 6) {
            for (char c: s0) {
                if (s.length() <= 6) {
                    s.push_back(c);
                }
            }
        }

        // a = (k + b) / n
        // What values of a and b == all s
        vector<pii> res;
        while (not s.empty()) {
            int k = stoll(s);

            if (k <= mx) {
                for (int b = 1; b <= min(k, 10000ll); b++) {
                    int a = (k + b) / n;

                    if (a <= 10000 and a * n - b == k)
                        res.emplace_back(a, b);
                }
            }

            s.pop_back();
        }
        cout << res.size() << nl;
        for (auto& p: res) cout << p.F << ' ' << p.S << nl;
    }
}

int32_t main() {
    fast
    solve();
}
