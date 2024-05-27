//#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//
//using namespace std;
//using namespace __gnu_pbds;
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//#define nl '\n'
//template<typename T>
//using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
//
//const int maxN = 2e5 + 1;
//int n, a, b, pre[maxN];
//multiset<int> s;
//
//void solve() {
//    fast
//    cin >> n >> a >> b;
//    for (int i{1}; i <= n; i++) {
//        cin >> pre[i];
//        pre[i] += pre[i - 1];
//    }
//
//    for (int i{a}; i <= b; i++) {
//        s.insert(pre[i]);
//    }
//
//    int best = *s.rbegin();
//    for (int i{1}; i + a <= n; i++) {
//        s.erase(pre[i + a - 1]);
//        s.insert(pre[min(i + b, n)]);
//        best = max(best, *s.rbegin() - pre[i]);
//    }
//
//    cout << best << endl;
//}
//
//int32_t main() {
//    solve();
//}
