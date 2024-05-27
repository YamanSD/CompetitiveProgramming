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
//    int n;
//    cin >> n;
//    int x[n + 1], ds[n + 1];
//    memset(x, 0, n + 1);
//    memset(ds, 0, n + 1);
//
//    for (int i{1}; i <= n; i++) {
//        cin >> x[i];
//        int k{i - 1};
//
//        while (x[k] >= x[i]) {
//            k = ds[k];
//        }
//
//        ds[i] = k;
//        cout << ds[i] << ' ';
//    }
//
//    cout << nl;
//}
//
//int32_t main() {
//    solve();
//}
