/**
 * Equalize
 * 3:54 PM 6/4/2024
 */
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
    fast
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int& i: a) cin >> i;
        sort(a.begin(), a.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());

        int pnt = 0, ans = 0;
        for (int i = 0; i < a.size(); i++) {
            while(a[i] - a[pnt] >= n) {
                pnt++;
            }
            ans = max(ans, i - pnt + 1);
        }
        cout << ans << endl;
    }
}
