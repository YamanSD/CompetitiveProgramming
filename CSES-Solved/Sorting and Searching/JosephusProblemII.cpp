//#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//
//using namespace std;
//using namespace __gnu_pbds;
//
//int n, k, x;
//size_t idx;
//tree<int,
//     null_type,
//     less<>,
//     rb_tree_tag,
//     tree_order_statistics_node_update> t;
//
//int main(){
//    cin >> n >> k;
//    for (int i{1}; i <= n; i++) {
//        t.insert(i);
//    }
//
//    idx = k;
//    while (not t.empty()) {
//        idx %= t.size();
//        x = *t.find_by_order(idx);
//        t.erase(x);
//
//        cout << x << ' ';
//        idx += k;
//    }
//
//    cout << '\n';
//}
