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
//    int n, s, e, res{0}, cur{0};
//    vector<pair<int, int>> v{};
//    cin >> n;
//
//    while (n--) {
//        cin >> s >> e;
//        v.emplace_back(s, 1);
//        v.emplace_back(e, -1);
//    }
//
//    std::sort(v.begin(), v.end(), [](auto& a, auto& b) {
//        return a.first == b.first ? a.second < b.second : a.first < b.first;
//    });
//
//    for (auto i: v) {
//        cur += i.second;
//        res = max(res, cur);
//    }
//
//    cout << res << endl;
//}
//
//int32_t main() {
//    solve();
//}
