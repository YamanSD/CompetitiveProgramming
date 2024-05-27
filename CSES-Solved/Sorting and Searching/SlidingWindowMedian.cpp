//#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//
//using namespace std;
//using namespace __gnu_pbds;
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//#define nl '\n'
//template<typename T>
//using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
//
//
//void solve() {
//    fast
//    int n, k;
//    cin >> n >> k;
//    int x[n];
//    ordered_set<pair<int, int>> t{};
//
//    for (int i{0}; i < k; i++) {
//        cin >> x[i];
//        t.insert({x[i], i});
//    }
//
//    cout << (t.find_by_order((k - 1) / 2)->first) << ' ';
//    for (int i{k}; i < n; i++) {
//        cin >> x[i];
//        t.insert({x[i], i});
//        t.erase({x[i - k], i - k});
//        cout << (t.find_by_order((k - 1) / 2)->first) << ' ';
//    }
//    cout << nl;
//}
//
//int32_t main() {
//    solve();
//}
