/**
 * 13:11:10 8/2/24
 * CardConstructions
 */
// ./CodeForces/1100/CardConstructions.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

int sumn(int n) {
    return n <= 0 ? 0 : ((n + 1) * n) / 2;
}

int p(int h) {
    if (h == 0) return 0;
    else if (h == 1) return 2;
    return 3 * (h * h - sumn(h - 1)) - h;
}

int getd(int n) {
    return floor(sqrt(1 + 24 * n));
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // p(h) = 2 * h + h - 1 + p(h - 1)
        // p(h) = 2 * h + 3 * (h - 1) + (h - 2) + p(h - 2)
        //      = 2 * (h - 0) + 3 * (h - 1) + 3 * (h - 2) + (h - 3) + p(h - 3)
        //      ...
        //      = -h + 3 * (h * h - sumn(h - 1)) + p(1)
        //      = 3 * (h * h - sumn(h - 1)) - h ;(for h >= 2)
        // p(0) = 0
        // p(1) = 2
        //
        // 3 * (h * h - h * (h - 1) / 2) - h = n
        // 3 * h * (h - (h - 1) / 2) - h = n
        // 3 * h * (h + 1) / 2 - h = n
        // 3 * h * (h + 1) - 2 * h - 2 * n = 0
        // 3 * h * h + h - 2 * n = 0
        // ax^2 + bx + c = 0
        // a = 3, b = 1, c = -2 * n
        // h = (-1 + sqrt(1 + 24 * n)) / 6 (quad formula)
        //
        int res = 0;
        int d = getd(n);

        while (d - 1 >= 6) {
            res++;
            int h = (d - 1) / 6;
            n -= p(h);
            d = getd(n);
        }

        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
