/**
 * ConcertTickets
 * 12:41 PM 6/12/2024
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n, m, tmp;
    cin >> n >> m;
    int t[m];
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(-tmp);
    }
    for (int& i: t) cin >> i;

    for (int c: t) {
        auto p = s.lower_bound(-c);
        if (p == s.end()) {
            cout << -1 << nl;
        } else {
            cout << -*p << nl;
            s.erase(p);
        }
    }
}

//int32_t main() {
//    solve();
//}