//#include <bits/stdc++.h>
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//
//int n, x, temp, a{-1}, b{-1};
//map<int, pair<int, int>> mp{};
//
//void solve() {
//    fast
//    cin >> n >> x;
//
//    for (int i{0}; i < n; i++) {
//        cin >> temp;
//
//        if (mp.contains(temp)) {
//            mp[temp].second = i;
//        } else {
//            mp[temp] = {i, -1};
//        }
//    }
//
//    for (auto& it: mp) {
//        auto cl{mp.find(x - it.first)};
//
//        if (cl != mp.end()) {
//            if (cl->first == it.first) {
//                if (it.second.second != -1) {
//                    a = it.second.first;
//                    b = it.second.second;
//                }
//            } else {
//                a = it.second.first;
//                b = cl->second.first;
//            }
//        }
//    }
//
//    if (a == -1) {
//        cout << "IMPOSSIBLE" << endl;
//    } else {
//        cout << (a + 1) << ' ' << (b + 1) << endl;
//    }
//}
//
//int32_t main() {
//    solve();
//}
