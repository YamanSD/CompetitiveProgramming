/**
 * DiceCombinations
 * 11:40 PM 6/15/2024
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
#define INF ((int)1e18)
#define MOD ((int)1e9 + 7)
#define F first
#define S second
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n;
    cin >> n;
    int a[n + 1], vals[]{1, 2, 3, 4, 5, 6};
    a[0] = 0;

    for (int i = 1; i <= n; i++) {
        a[i] = 0;

        for (int d: vals) {
            if (i - d > 0) {
                a[i] += a[i - d];
            } else if (i == d) {
                a[i]++;
            }

            a[i] %= MOD;
        }
    }

    cout << a[n] << nl;
}

int32_t main() {solve();}
