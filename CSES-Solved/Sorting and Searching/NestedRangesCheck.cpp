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
//
//struct Range {
//    int l, r, index;
//
//    bool operator<(const Range& other) const {
//        return l == other.l ? r > other.r : l < other.l;
//    }
//};
//
//const int maxN = 2e5, maxX = 1e9;
//int n, x, y, maxEnd, minEnd;
//bool contained[maxN], contains[maxN];
//Range r[maxN];
//
//
//void solve() {
//    fast
//    cin >> n;
//
//    for (int i{0}; i < n; i++) {
//        cin >> r[i].l >> r[i].r;
//        r[i].index = i;
//    }
//
//    sort(r, r + n);
//
//    maxEnd = 0;
//    for (int i{0}; i < n; i++) {
//        if (r[i].r <= maxEnd) {
//            contained[r[i].index] = true;
//        }
//
//        maxEnd = max(maxEnd, r[i].r);
//    }
//
//    minEnd = maxX + 1;
//    for (int i{n - 1}; 0 <= i; i--) {
//        if (r[i].r >= minEnd) {
//            contains[r[i].index] = true;
//        }
//
//        minEnd = min(minEnd, r[i].r);
//    }
//
//    for (int i{0}; i < n; i++) {
//        cout << contains[i] << ' ';
//    }
//    cout << endl;
//    for (int i{0}; i < n; i++) {
//        cout << contained[i] << ' ';
//    }
//    cout << endl;
//}
//
//int32_t main() {
//    solve();
//}
