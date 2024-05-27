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
//const int maxN = 1e3 + 1;
//int n, x, vals[maxN];
//unordered_map<int, vector<pair<int, int>>> mp;
//
//void solve() {
//    fast
//    cin >> n >> x;
//
//    mp.reserve(maxN*maxN);
//    for (int i{1}; i <= n; i++) {
//        cin >> vals[i];
//        for (int j{1}; j < i; j++) {
//            int psum{vals[i] + vals[j]};
//
//            if (psum >= x) {
//                continue;
//            }
//
//            if (mp.find(x - psum) != mp.end()) {
//                for (auto p: mp[x - psum]) {
//                    if (p.first != j and p.second != j and p.first != i and p.second != i) {
//                        cout << p.first << ' ' << p.second << ' ' << j << ' ' << i << nl;
//                        return;
//                    }
//                }
//            } else {
//                mp[psum].emplace_back(j, i);
//            }
//        }
//    }
//
//    cout << "IMPOSSIBLE" << nl;
//}
//
//int32_t main() {
//    solve();
//}
