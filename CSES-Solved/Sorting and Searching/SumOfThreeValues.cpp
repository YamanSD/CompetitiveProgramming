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
//const int maxN = 5e3;
//int n, x, vals[maxN];
//map<int, set<int>> ind;
//map<int, set<int>>::iterator p;
//
//void solve() {
//    fast
//    cin >> n >> x;
//
//    for (int i{0}; i < n; i++) {
//        cin >> vals[i];
//        ind[vals[i]].insert(i);
//    }
//
//    for (int i{0}; i < n; i++) {
//        for (int j{i + 1}; j < n; j++) {
//            p = ind.find(x - (vals[i] + vals[j]));
//            auto& s{p->second};
//
//            if (p != ind.end()) {
//                if ((vals[i] == p->first or vals[j] == p->first) and s.size() < 2) {
//                    continue;
//                }
//
//                if (vals[i] == p->first and vals[j] == p->first and s.size() < 3) {
//                    continue;
//                }
//
//                s.erase(i);
//                s.erase(j);
//
//                cout << (i + 1) << ' ' << (j + 1) << ' ' << (*s.begin() + 1) << nl;
//                return;
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
