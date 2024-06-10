/**
 * TeamOlympiad
 * 12:33 PM 6/10/2024
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
    int n, p[3]{-1, -1, -1};
    vector<vector<int>> res;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (p[a[i].first - 1] == -1) {
            p[a[i].first - 1] = i;
        }
    }

    if (p[0] == -1 or p[1] == -1 or p[2] == -1) {
        cout << 0 << nl;
        return;
    }

    while (a[p[0]].first == 1 and a[p[1]].first == 2 and a[p[2]].first == 3) {
        res.push_back({a[p[0]++].second, a[p[1]++].second, a[p[2]++].second});
    }

    cout << res.size() << nl;
    for (auto& v: res) {
        for (auto i: v) {
            cout << i + 1 << ' ';
        }
        cout << nl;
    }
}
