/**
 * NextRound
 * 5:27 PM 6/5/2024
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
    int n, k, res = 0;
    cin >> n >> k;
    int a[n];

    for (int& i: a) {
        cin >> i;
    }

    k = a[k - 1];
    for (int i: a) {
        if (i >= k and i > 0) {
            res++;
        }
    }

    cout << res << nl;
}