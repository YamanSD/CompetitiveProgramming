/**
 * PashmakAndFlowers
 * 4:12 PM 6/6/2024
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
    int n, mn = 1e9, mx = 0, b;
    map<int, int> cnt;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b;
        cnt[b]++;
        mn = min(mn, b);
        mx = max(mx, b);
    }

    cout << (mx - mn) << ' ';
    if (cnt[mn] == n) {
        cout << (cnt[mn] * (cnt[mn] - 1)) / 2 << nl;
    } else {
        cout << cnt[mn] * cnt[mx] << nl;
    }
}
