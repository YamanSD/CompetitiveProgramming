/**
 * BerSUBall
 * 8:41 AM 6/16/2024
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n, m, res = 0, tmp;
    multiset<int> b, g;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        b.insert(tmp);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        g.insert(tmp);
    }

    while (not b.empty()) {
        auto i = b.begin();
        auto p = g.lower_bound(*i - 1);
        if (p != g.end() and abs(*i - *p) <= 1) {
            g.erase(p);
            res++;
        }

        b.erase(i);
    }

    cout << res << nl;
}


int32_t main() { solve(); }
