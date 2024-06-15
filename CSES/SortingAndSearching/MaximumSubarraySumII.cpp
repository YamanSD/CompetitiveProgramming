/**
 * MaximumSubarraySumII
 * 7:16 PM 6/15/2024
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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) v[i] += v[i - 1];
    set<pair<int, int>> rbounds;

    for (int i = a; i <= b; i++) {
        rbounds.insert({v[i], i});
    }
    int res = LONG_LONG_MIN;

    for (int i = 1; i <= n - a + 1; i++) {
        res = max(res, rbounds.rbegin()->F - v[i - 1]);
        rbounds.erase({v[i + a - 1], i + a - 1});

        if (i + b <= n) {
            rbounds.insert({v[i + b], i + b});
        }
    }

    cout << res << nl;
}

//int32_t main() {solve();}
