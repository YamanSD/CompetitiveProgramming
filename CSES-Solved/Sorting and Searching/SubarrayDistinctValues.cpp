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
//    int n, k, ans{0}, unique{0}, r{0};
//    cin >> n >> k;
//    int x[n + 5];
//    memset(x, 0, sizeof(int) * (n + 5));
//    map<int, int> freq{};
//
//    for (int i{1}; i <= n; i++) {
//        cin >> x[i];
//    }
//
//    for (int l{1}; l <= n; l++) {
//        while (r < n and (freq[x[r + 1]] >= 1 or unique < k)) {
//            r++;
//            freq[x[r]]++;
//
//            if (freq[x[r]] == 1) {
//                unique++;
//            }
//        }
//
//        ans += (r - l + 1);
//        freq[x[l]]--;
//
//        if (not freq[x[l]]) {
//            unique--;
//        }
//    }
//
//    cout << ans << nl;
//}
//
//int32_t main() {
//    solve();
//}
