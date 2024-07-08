/**
 * 10:45:37 7/8/24
 * NewYearTransportation
 */
// ./CodeForces/1000/NewYearTransportation.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, t;
    cin >> n >> t;
    t--;
    int a[n - 1];
    for (int& i: a) cin >> i;
    int i = 0;

    for (i = 0; i < n - 1; i += a[i]) {
        if (i == t) {
            YES
            return;
        } else if (i > t) {
            NO
            return;
        }
    }

    if (t == i) YES else NO
}

int32_t main() {
    fast
    solve();
}
