/**
 * FairDivision
 * 8:07 PM 6/17/2024
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
    int t, n, tmp;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[2];
        a[0] = a[1] = 0;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            a[tmp - 1]++;
        }

        if (a[0] % 2 or a[0] == 0 and a[1] % 2) {
            cout << "NO" << nl;
        } else {
            cout << "YES" << nl;
        }
    }
}

int32_t main() { solve(); }
