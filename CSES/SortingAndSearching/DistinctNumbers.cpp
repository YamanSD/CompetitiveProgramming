/**
 * DistinctNumbers
 * 12:16 PM 6/12/2024
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
    int n, tmp;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }

    cout << s.size() << nl;
}
//int32_t main() {
//    solve();
//}
