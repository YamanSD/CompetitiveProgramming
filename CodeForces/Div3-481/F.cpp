/**
 * 10:44:49 7/26/24
 * F
 */
// ./CodeForces/Div3-481/F.cpp
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
#define EPS 1e-9l
#define pii pair<int, int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    pii q[k];
    for (int& i: a) cin >> i;
    for (auto&p: q) cin >> p.F >> p.S;
    ordered_set<pii> s;
    for (int i = 0; i < n; i++) {
        s.insert({a[i], i});
    }
    int pos[n];
    for (int i = 0; i < n; i++) {
        pos[i] = s.order_of_key({a[i], -1});
    }
    for (auto& p: q) {
        int i = p.F - 1, j = p.S - 1;
        if (a[i] < a[j]) {
            pos[j]--;
        } else if (a[j] < a[i]) {
            pos[i]--;
        }
    }
    for (int i: pos) cout << i << ' ';
    cout << nl;
}

int32_t main() {
    fast
    solve();
}
