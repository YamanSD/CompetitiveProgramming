/**
 * Projects
 * 12:50 PM 6/19/2024
 */
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
#define F first
#define S second
#define INF ((int)1e18)
#define MOD ((int)1e9 + 7)
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

struct Project {
    int s, e, re;

    bool operator<(const Project& p) const {
        return e < p.e;
    }
};


void solve() {
    fast
    int n;
    cin >> n;
    Project a[n];
    for (auto& p: a) cin >> p.s >> p.e >> p.re;
    sort(a, a + n);
    map<int, int> m{{0, 0}};
    int mx = -1;

    for (auto& p: a) {
        auto t = m.lower_bound(p.s);
        t--;
        mx = max(mx, p.re + t->S);
        m[p.e] = mx;
    }

    cout << mx << nl;
}

int32_t main() { solve(); }
