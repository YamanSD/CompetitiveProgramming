/**
 * Fence
 * 7:41 PM 6/17/2024
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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int& i: a) cin >> i;
    int sm = 0;
    for (int i = 0; i < k; i++) {
        sm += a[i];
    }
    int mn = sm, j = 1;

    for (int i = 1; i <= n - k; i++) {
        sm += a[i + k - 1] - a[i - 1];

        if (mn > sm) {
            mn = sm;
            j = i + 1;
        }
    }

    cout << j << nl;
}

int32_t main() { solve(); }
