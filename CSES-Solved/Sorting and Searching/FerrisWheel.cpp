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
//    int n, x, p, res{0}, l{0};
//    vector<int> w{};
//    cin >> n >> x;
//
//    while (n--) {
//        cin >> p;
//        w.push_back(p);
//    }
//
//    std::sort(w.begin(), w.end());
//
//    for (int r = w.size() - 1; l <= r; r--) {
//        if (w[l] + w[r] <= x) {
//            l++;
//        }
//        res++;
//    }
//
//    cout << res << endl;
//}
//
//int32_t main() {
//    solve();
//}
