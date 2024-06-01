/**
 * MaximumSum
 * 4:41 PM 6/1/2024
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
    const int MOD = 1e9 + 7;
    int t, n, k, S, sum, cur, res;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        int a[n];

        for (int& i: a) {
            cin >> i;
        }
        S = sum = cur = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i];
            cur += a[i];
            cur = max(cur, 0ll);
            S = max(S, cur);
        }

        sum = (sum % MOD + MOD) % MOD;
        S %= MOD;
        res = 1;

        for (int i = 0; i < k; i++) {
            res = (res * 2) % MOD;
        }

        cout << (sum + S * res - S + MOD) % MOD << nl;
    }
}
