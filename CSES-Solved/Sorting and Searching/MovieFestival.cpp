//#include <bits/stdc++.h>
//#define int long long
//#define uint unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//int n, a, b, res{0}, ele{0};
//struct Movie {int s, e;};
//vector<Movie> mov{};
//
//void solve() {
//    fast
//    cin >> n;
//
//    while (n--) {
//        cin >> a >> b;
//        mov.push_back({a, b});
//    }
//
//    std::sort(mov.begin(), mov.end(), [](auto& a, auto& b) {
//        return a.e < b.e;
//    });
//
//    for (size_t i{0}; i < mov.size(); i++) {
//        if (ele <= mov[i].s) {
//            res++;
//            ele = mov[i].e;
//        }
//    }
//
//    cout << res << endl;
//}
//
//int32_t main() {
//    solve();
//}
