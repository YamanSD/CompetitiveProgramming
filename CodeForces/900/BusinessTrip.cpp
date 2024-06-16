/**
 * BusinessTrip
 * 9:00 AM 6/16/2024
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
    int n = 12, k, a[12], res = 0, cur = 0;
    cin >> k;
    for (int& i: a) cin >> i;
    sort(a, a + n);

    for (int i = n - 1; i >= 0 and cur < k; i--) {
        cur += a[i];
        res++;
    }

    cout << (cur < k ? -1 : res) << nl;
}

int32_t main() { solve(); }
