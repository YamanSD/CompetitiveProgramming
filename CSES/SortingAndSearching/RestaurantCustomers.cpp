/**
 * RestaurantCustomers
 * 12:59 PM 6/12/2024
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
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n, res = 0, tmp = 0, a, b;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.emplace_back(a, 1);
        v.emplace_back(b, -1);
    }

    sort(v.begin(), v.end(), [](auto& v0, auto& v1) {
        return v0.first == v1.first ? v0.second < v1.second : v0.first < v1.first;
    });

    for (auto& p: v) {
        tmp += p.second;
        res = max(res, tmp);
    }

    cout << res << nl;
}

int32_t main() {
    solve();
}