/**
 * 16:02:25 7/11/24
 * Lecture
 */
// ./CodeForces/1000/Lecture.cpp
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
    int n, m;
    cin >> n >> m;
    set<string> fs;
    map<string, string> t;
    string s0, s1, s;

    while (m--) {
        cin >> s0 >> s1;
        t[s0] = s1;
        t[s1] = s0;
        fs.insert(s0);
    }

    while (n--) {
        cin >> s;

        s0 = t[s];
        s1 = t[s0];
        if (s0.size() < s1.size()) {
            cout << s0 << ' ';
        } else if (s1.size() < s0.size()) {
            cout << s1 << ' ';
        } else {
            if (fs.find(s0) != fs.end()) {
                cout << s0 << ' ';
            } else {
                cout << s1 << ' ';
            }
        }
    }
}

int32_t main() {
    fast
    solve();
}
