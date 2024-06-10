/**
 * TenWordsOfWisdom
 * 2:00 PM 6/10/2024
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
    int t, n, mx, mxi;
    cin >> t;

    while (t--) {
        cin >> n;
        mx = -1, mxi = -1;
        pair<int, int> a[n];
        for (auto& p: a) cin >> p.first >> p.second;

        for (int i = 0; i < n; i++) {
            if (a[i].first <= 10 and a[i].second > mx) {
                mx = a[i].second;
                mxi = i + 1;
            }
        }

        cout << mxi << nl;
    }
}
