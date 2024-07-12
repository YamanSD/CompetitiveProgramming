/**
 * 22:41:47 7/12/24
 * MinimumEuclideanDistance
 */
// ./CSES/Geometry/MinimumEuclideanDistance.cpp
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
#define P pii
#define X F
#define Y S
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, x, y;
    cin >> n;
    P a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].X >> a[i].Y;
    }
    sort(a, a + n);
    int d = 8 * INF, j = 0;
    set<P> s{{a[0].Y, a[0].X}};

    for (int i = 1; i < n; i++) {
        int dd = ceil(sqrt(d));

        while (j < i and a[j].X < a[i].X - dd) {
            s.erase({a[j].Y, a[j].X});
            j++;
        }

        auto lb = s.lower_bound({a[i].Y - dd, 0});
        auto ub = s.upper_bound({a[i].Y + dd, 0});

        for (auto it = lb; it != ub; it++) {
            x = it->X - a[i].Y, y = it->Y - a[i].X;
            d = min(d, x * x + y * y);
        }

        s.insert({a[i].Y, a[i].X});
    }
    cout << d << nl;
}

int32_t main() {
    fast
    solve();
}
