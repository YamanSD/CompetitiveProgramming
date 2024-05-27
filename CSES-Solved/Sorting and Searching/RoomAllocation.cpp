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
//int n, a, b, rooms, ans[maxN + 1];
//struct Cust {int type, time, id;} queries[2 * maxN];
//set<int> s;
//
//void solve() {
//    fast
//    cin >> n;
//    for (int i{0}; i < n; i++) {
//        s.insert(i + 1);
//        cin >> a >> b;
//        queries[2 * i] = {0, a, i + 1};
//        queries[2 * i + 1] = {1, b, i + 1};
//    }
//
//    sort(queries, queries + 2 * n, [](auto& a, auto& b) {
//        if (a.id == b.id or a.time == b.time) {
//            return a.type < b.type;
//        }
//
//        return a.time < b.time;
//    });
//
//
//    for (int i{0}; i < 2 * n; i++) {
//        if (queries[i].type == 0) {
//            ans[queries[i].id] = *s.begin();
//            s.erase(s.begin());
//        } else {
//            s.insert(ans[queries[i].id]);
//        }
//    }
//
//    for (int i{1}; i <= n; i++) {
//        rooms = max(rooms, ans[i]);
//    }
//
//    cout << rooms << nl;
//    for (int i{1}; i <= n; i++) {
//        cout << ans[i] << ' ';
//    }
//    cout << nl;
//}
//
//int32_t main() {
//    solve();
//}
