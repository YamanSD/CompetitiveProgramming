//#include <bits/stdc++.h>
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//
//int n, temp, res{1};
//vector<int> v;
//
//void solve() {
//    fast
//    cin >> n;
//    v = vector<int>(n);
//
//    for (int i{0}; i < n; i++) {
//        cin >> temp;
//        v[temp - 1] = i;
//    }
//
//    for (int i{1}; i < n; i++) {
//        if (v[i - 1] > v[i]) {
//            res++;
//        }
//    }
//
//    cout << res << endl;
//}
//
//int32_t main() {
//    solve();
//}
