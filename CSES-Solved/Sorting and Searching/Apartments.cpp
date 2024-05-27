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
//    int n, m, k, temp, res{0};
//    multiset<int> ap{};
//    vector<int> a{};
//    cin >> n >> m >> k;
//
//    while (n--) {
//        cin >> temp;
//        a.push_back(temp);
//    }
//
//    while (m--) {
//        cin >> temp;
//        ap.emplace(temp);
//    }
//
//    std::sort(a.begin(), a.end());
//
//    for (auto i: a) {
//        auto cl{ap.lower_bound(i - k)};
//
//        if (cl != ap.end()) {
//            if (abs(i - *cl) <= k) {
//                res++;
//                ap.extract(*cl);
//            }
//        }
//    }
//
//    cout << res << endl;
//}
//
//int32_t main() {
//    solve();
//}
