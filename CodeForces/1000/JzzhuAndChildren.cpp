/**
 * 13:49:58 7/13/24
 * JzzhuAndChildren
 */
// ./CodeForces/1000/JzzhuAndChildren.cpp
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
    int n, m;
    cin >> n >> m;
    int a[n], mx = -1, l = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = (a[i] + m - 1) / m;
        if (mx < a[i]) {
            mx = a[i];
            l = i;
        } else if (mx == a[i]) {
            l = i;
        }
    }

    cout << l + 1 << nl;
}

int32_t main() {
    fast
    solve();
}
