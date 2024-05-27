//#include <bits/stdc++.h>
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//
//int n, temp, res, cur;
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
//    cur = 0;
//    res = v[0];
//
//    for (auto i: v) {
//        if (cur < i and cur < 0) {
//            cur = i;
//        } else {
//            cur += i;
//        }
//
//        res = max(cur, res);
//    }
//
//    cout << max(res, cur) << endl;
//}
//
//int32_t main() {
//    solve();
//}
