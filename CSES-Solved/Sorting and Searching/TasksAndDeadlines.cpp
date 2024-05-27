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
//const int maxN = 2e5;
//int n, a, d, timer, reward;
//struct task {int a, d;} tasks[maxN];
//
//void solve() {
//    fast
//    cin >> n;
//
//    for (int i{0}; i < n; i++) {
//        cin >> a >> d;
//        tasks[i] = {a, d};
//    }
//
//    sort(tasks, tasks + n, [](auto& a, auto& b) {
//        return a.a == b.a ? a.d < b.d : a.a < b.a;
//    });
//
//    for (int i{0}; i < n; i++) {
//        timer += tasks[i].a;
//        reward += (tasks[i].d - timer);
//    }
//
//    cout << reward << nl;
//}
//
//int32_t main() {
//    solve();
//}
