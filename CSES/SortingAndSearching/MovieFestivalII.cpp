/**
 * MovieFestivalII
 * 3:35 PM 6/15/2024
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
#define F first
#define S second
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n, k, res = 0;
    cin >> n >> k;
    pair<int, int> a[n];
    for (auto& p: a) cin >> p.F >> p.S;
    sort(a, a + n, [](auto& v0, auto& v1) {
        return v0.S < v1.S;
    });
    set<pair<int, int>> s;

    for (int i = 0; i < n; i++) {
        if (s.empty()) {
            s.insert({-a[i].S, i});
        } else {
            auto p = s.lower_bound({-a[i].F, -1});

            if (p != s.end()) {
                s.erase(p);
                s.insert({-a[i].S, i});
            } else if (p == s.end() and s.size() < k) {
                s.insert({-a[i].S, i});
            } else {
                res++;
            }
        }
    }

    cout << n - res << nl;
}

//int32_t main() {solve();}
