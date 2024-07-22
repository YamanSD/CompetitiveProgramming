/**
 * 12:58:46 7/22/24
 * Vacations
 */
// ./CodeForces/1400/Vacations.cpp
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
#define NO (cout << "NO" << nl);
#define YES (cout << "YES" << nl);
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for (int& i: a) cin >> i;
    int ac = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (ac == 1) {
                ac = 0;
            } else {
                ac = 1;
                cnt++;
            }
        } else if (a[i] == 2) {
            if (ac == 2) {
                ac = 0;
            } else {
                ac = 2;
                cnt++;
            }
        } else if (a[i] == 3) {
            if (ac == 1) {
                ac = 2;
            } else if (ac == 2) {
                ac = 1;
            } else {
                ac = 0;
            }
            cnt++;
        } else {
            ac = 0;
        }
    }
    cout << n - cnt << nl;
}

int32_t main() {
    fast
    solve();
}
