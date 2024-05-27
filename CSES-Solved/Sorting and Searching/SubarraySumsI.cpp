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
//    int n, x, sum{0}, l{0}, cnt{0};
//    cin >> n >> x;
//    int nums[n + 1];
//    memset(nums, 0, n + 1);
//
//    for (int r{1}; r <= n; r++) {
//        cin >> nums[r];
//        sum += nums[r];
//
//        while (sum > x) {
//            sum -= nums[l++];
//        }
//
//        if (sum == x) {
//            cnt++;
//        }
//    }
//
//    cout << cnt << nl;
//}
//
//int32_t main() {
//    solve();
//}
