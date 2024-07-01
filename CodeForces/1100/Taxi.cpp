/**
 * 15:22:22 6/25/24
 * Taxi
 */
// ./CodeForces/1100/Taxi.cpp
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
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;
    map<int, int> m;
    for (int i: a) m[i]++;
    int res = m[4] + m[3] + m[2] / 2;
    m[1] -= m[3];
    if (m[2] % 2) {
        res++;
        m[1] -= 2;
    }
    if (m[1] > 0) {
        res += (m[1] + 3) / 4;
    }
    cout << res << nl;
}

int32_t main() {
    fast
    solve();
}
