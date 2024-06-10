/**
 * GreenGoldDogArrayAndPermuation
 * 1:38 PM 6/10/2024
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
        pair<int, int> a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a, a + n);
        vector<int> res(n);
        int cnt = 1;

        for (int i = n - 1; 0 <= i; i--) {
            res[a[i].second] = cnt++;
        }

        for (int i: res) {
            cout << i << ' ';
        }
        cout << nl;
    }
}
