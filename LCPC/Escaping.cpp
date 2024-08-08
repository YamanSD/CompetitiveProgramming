/**
 * 18:40:40 7/29/24
 * Escaping
 */
// ./LCPC/Escaping.cpp
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

void solve() {
    int n;
    cin >> n;
    vector<pii> ps(n);
    for (auto& p: ps) cin >> p.F >> p.S;
    pii t;
    cin >> t.F >> t.S;
    vector<bool> net(4);
    auto all = [&]() {
        bool f = true;
        for (auto p: net) f &= p;
        return f;
    };

    for (auto& p: ps) {
        if (p.F < t.F and abs(p.S - t.S) <= abs(p.F - t.F)) net[0] = true;
        if (p.F > t.F and abs(p.S - t.S) <= abs(p.F - t.F)) net[2] = true;
        if (p.S < t.S and abs(p.S - t.S) >= abs(p.F - t.F)) net[1] = true;
        if (p.S > t.S and abs(p.S - t.S) >= abs(p.F - t.F)) net[3] = true;
        if (all()) break;
    }

    if (all()) NO else YES
}

int32_t main() {
    fast
    solve();
}
