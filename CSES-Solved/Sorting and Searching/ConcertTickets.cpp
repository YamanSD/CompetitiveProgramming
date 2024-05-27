//#include <bits/stdc++.h>
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//
//
//void solve() {
//    fast
//    int n, m, temp;
//    vector<int> cus{};
//    multiset<int> tic{};
//    cin >> n >> m;
//
//    while (n--) {
//        cin >> temp;
//        tic.emplace(-temp);
//    }
//
//    while (m--) {
//        cin >> temp;
//        cus.push_back(-temp);
//    }
//
//    for (auto i: cus) {
//        auto cl{tic.lower_bound(i)};
//
//        if (cl == tic.end()) {
//            cout << -1 << '\n';
//        } else {
//            cout << -*cl << '\n';
//            tic.extract(*cl);
//        }
//    }
//}
//
//int32_t main() {
//    solve();
//}
