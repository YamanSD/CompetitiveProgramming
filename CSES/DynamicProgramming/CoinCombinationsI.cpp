/**
 * CoinCombinationsI
 * 8:01 AM 6/17/2024
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
    int n, x;
    cin >> n >> x;
    int cs[n], a[x + 1];
    a[0] = 1;
    for (int& i: cs) cin >> i;

    for (int i = 1; i <= x; i++) {
        a[i] = 0;
        for (int c: cs) {
            if (i - c > 0) {
                a[i] += a[i - c];
            } else if (i == c) {
                a[i]++;
            }

            a[i] %= MOD;
        }
    }

    cout << a[x] << nl;
}

int32_t main() { solve(); }
