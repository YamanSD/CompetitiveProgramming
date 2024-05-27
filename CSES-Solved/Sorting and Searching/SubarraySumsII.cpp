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
//    int n, x, a, sum{0}, cnt{0};
//    cin >> n >> x;
//    map<int, int> mp{};
//    mp[0]++;
//
//    for (int i{0}; i < n; i++) {
//        cin >> a;
//        sum += a;
//        cnt += mp[sum - x];
//        mp[sum]++;
//    }
//
//    cout << cnt << nl;
//}
//
//int32_t main() {
//    solve();
//}
