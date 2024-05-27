//#include <bits/stdc++.h>
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//int n, temp, res, l;
//map<int, int> mp;
//
//void solve() {
//    fast
//    cin >> n;
//    res = 0;
//    l = 1;
//
//    for (int r{1}; r <= n; r++) {
//        cin >> temp;
//
//        if (mp.contains(temp)) {
//            res = max(res, r - l);
//            l = max(l, mp[temp] + 1);
//        } else {
//            res = max(res, r - l + 1);
//            mp[temp] = r;
//        }
//    }
//
//    cout << max(n - l + 1, res) << endl;
//}
//
//int32_t main() {
//    solve();
//}
