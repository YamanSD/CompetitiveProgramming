/**
 * KefaAndCompany
 * 1:25 PM 6/12/2024
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
    int n, d;
    cin >> n >> d;
    pair<int, int> a[n];

    for (auto& p: a) {
        cin >> p.first >> p.second;
    }

    sort(a, a + n, [](auto& v0, auto& v1) {
        return v0.first < v1.first;
    });
    vector<int> res;

    int sm = 0, mn = -1, mx = -1;

    for (auto& p: a) {
        if (mn == -1) {
            mn = mx = p.first;
        }

        if (abs(p.first - mn) < d and abs(p.first - mx) < d) {
            sm += p.second;
            mn = min(mn, p.first);
            mx = max(mx, p.first);
        } else {
            res.push_back(sm);
            mn = mx = p.first;
            sm = p.second;
        }
    }
    res.push_back(sm);

    mx = -1;
    for (int i: res) mx = max(mx, i);

    cout << mx << nl;
}
