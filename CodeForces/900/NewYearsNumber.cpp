/**
 * NewYearsNumber
 * 8:19 PM 6/17/2024
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
    const int N = 1e6 + 10;
    static int a[N + 1];
    int t, n, cs[]{2021, 2020};
    cin >> t;
    a[0] = 0;

    for (int i = 1; i <= N; i++) {
        a[i] = INF;
        for (int c: cs) {
            if (i - c >= 0) {
                a[i] = min(a[i], a[i - c] + 1);
            }
        }
    }

    while (t--) {
        cin >> n;
        cout << (a[n] == INF ? "NO" : "YES") << nl;
    }
}

int32_t main() { solve(); }
