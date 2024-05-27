//#include <bits/stdc++.h>
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//int n, k, res{0};
//multiset<int> s;
//
//void solve() {
//    fast
//    cin >> n;
//
//    for (int i{0}; i < n; i++) {
//        cin >> k;
//        auto cl{s.upper_bound(k)};
//
//        if (cl == s.end() or *cl == 0) {
//            res++;
//        } else {
//            s.extract(*cl);
//        }
//
//        s.insert(k);
//    }
//
//    cout << res << endl;
//}
//
//int32_t main() {
//    solve();
//}
