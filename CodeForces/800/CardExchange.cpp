#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
#define unsigned unsigned int
#define double long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl '\n'
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
     int t, n, k, in;
     map<int, int> m;
     bool canCollapse;
     cin >> t;

     while (t--) {
         cin >> n >> k;
         m.clear();
         canCollapse = false;

         for (int i = 0; i < n; i++) {
             cin >> in;
             m[in]++;
         }

         for (const auto& p: m) {
             if (p.second >= k) {
                 canCollapse = true;
             }
         }

         if (canCollapse) {
             cout << min(n, k - 1) << nl;
         } else {
             cout << n << nl;
         }
     }
}
