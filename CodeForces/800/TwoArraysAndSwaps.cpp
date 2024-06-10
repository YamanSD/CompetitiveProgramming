/**
 * TwoArraysAndSwaps
 * 2:12 PM 6/10/2024
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
    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        int a[n], b[n];
        for (int& i: a) cin >> i;
        for (int& i: b) cin >> i;

        sort(a, a + n);
        sort(b, b + n);

        int i = 0;
        while (i < k) {
            if (a[i] < b[n - 1 - i]) {
                swap(a[i], b[n - 1 - i]);
            }
            i++;
        }

        cout << accumulate(a, a + n, 0ll) << nl;
    }

}
