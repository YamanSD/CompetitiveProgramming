/**
 * InterestingDrink
 * 1:16 PM 6/17/2024
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


void solve() {
    fast
    int n;
    cin >> n;
    int x[n];
    for (int& i: x) cin >> i;
    map<int, int> m;
    sort(x, x + n);
    for (int i: x) {
        auto p = m.lower_bound(-i);

        if (p == m.end()) {
            m[-i]++;
        } else {
            m[-i] = p->S + 1;
        }
    }
    int q, tmp;
    cin >> q;
    while (q--) {
        cin >> tmp;
        auto p = m.lower_bound(-tmp);
        if (p == m.end()) {
            cout << 0 << nl;
        } else {
            cout << p->S << nl;
        }
    }
}

int32_t main() { solve(); }
