/**
 * SlidingWindowMedian
 * 1:50 PM 6/15/2024
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


int med(ordered_set<pair<int, int>>& t) {
    auto s = t.size() / 2;

    return t.size() % 2 ? t.find_by_order(s)->F : min(
            t.find_by_order(s)->F,
            t.find_by_order(s - 1)->F
    );
}

void solve() {
    fast
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int& i: a) cin >> i;
    ordered_set<pair<int, int>> t;
    for (int i = 0; i < k; i++) {
        t.insert({a[i], i});
    }
    cout << med(t) << ' ';

    for (int i = 1; i + k <= n; i++) {
        t.erase({a[i - 1], i - 1});
        t.insert({a[i + k - 1], i + k - 1});
        cout << med(t) << ' ';
    }
    cout << nl;
}

//int32_t main() {solve();}
