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
//const int maxN = 2e5;
//int n, K, a[maxN], lo = 0, hi = 1e18;
//
//bool check(int x) {
//    int k = 1, sum = 0;
//    for (int i{0}; i < n; i++) {
//        sum += a[i];
//        if (sum > x) {
//            k++;
//            sum = a[i];
//        }
//    }
//
//    return k <= K;
//}
//
//void solve() {
//    fast
//    cin >> n >> K;
//    for (int i{0}; i < n; i++) {
//        cin >> a[i];
//        lo = max(lo, a[i]);
//    }
//
//    while (lo <= hi) {
//        int mid{lo + (hi - lo) / 2};
//
//        if (check(mid)) {
//            hi = mid - 1;
//        } else {
//            lo = mid + 1;
//        }
//    }
//
//    cout << lo << nl;
//}
//
//int32_t main() {
//    solve();
//}
