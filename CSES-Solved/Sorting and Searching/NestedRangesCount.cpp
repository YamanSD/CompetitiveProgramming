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
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//
//struct Range {
//    int l, r, index;
//
//    bool operator<(const Range& other) const {
//        return l == other.l ? r > other.r : l < other.l;
//    }
//};
//
//const int maxN = 2e5;
//int n, contained[maxN], contains[maxN];
//Range r[maxN];
//
//void solve() {
//    fast
//    cin >> n;
//    ordered_set<pair<int, int>> rightBoundaries{};
//
//    for (int i{0}; i < n; i++) {
//        cin >> r[i].l >> r[i].r;
//        r[i].index = i;
//    }
//
//    sort(r, r + n);
//
//    for (int i{0}; i < n; i++) {
//        rightBoundaries.insert({r[i].r, -1 * i});
//        contained[r[i].index] =
//                rightBoundaries.size() - rightBoundaries.order_of_key({r[i].r, -1 * i}) - 1;
//    }
//    rightBoundaries.clear();
//
//    for (int i{n - 1}; i >= 0; i--) {
//        rightBoundaries.insert({r[i].r, -1 * i});
//        contains[r[i].index] = rightBoundaries.order_of_key({r[i].r, -1 * i});
//    }
//
//    for (int i{0}; i < n; i++) {
//        cout << contains[i] << ' ';
//    }
//    cout << nl;
//    for (int i{0}; i < n; i++) {
//        cout << contained[i] << ' ';
//    }
//    cout << nl;
//}
//
//int32_t main() {
//    solve();
//}
