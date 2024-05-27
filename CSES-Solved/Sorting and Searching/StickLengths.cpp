//#include <bits/stdc++.h>
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//
//int n, temp, res{0}, median;
//vector<int> v{};
//
//void solve() {
//    fast
//    cin >> n;
//
//    while (n--) {
//        cin >> temp;
//        v.push_back(temp);
//    }
//
//    std::sort(v.begin(), v.end());
//
//    median = v[(v.size() - 1) / 2];
//    for (auto& it: v) {
//        res += abs(median - it);
//    }
//
//    cout << res << endl;
//}
//
//int32_t main() {
//    solve();
//}
