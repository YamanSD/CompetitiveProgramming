/**
 * MaximumIncrease
 * 3:13 PM 6/18/2024
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
#define INF ((int)1e18)
#define MOD ((int)1e9 + 7)
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;
    int mx = 1, cur = 1;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] < a[i]) {
            cur++;
        } else {
            mx = max(cur, mx);
            cur = 1;
        }
    }

    cout << max(cur, mx) << nl;
}

int32_t main() { solve(); }
