/**
 * 14:15:21 7/22/24
 * QueriesAboutLessOrEqualElements
 */
// ./CodeForces/1300/QueriesAboutLessOrEqualElements.cpp
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
    ordered_set<pii> s;
    int b[m], v;
    for (int i = 0; i < n; i++) {
        cin >> v;
        s.insert({v, i});
    }
    for (int& i: b) cin >> i;

    for (int i: b) {
        cout << s.order_of_key({i, INF}) << ' ';
    }cout << nl;
}

int32_t main() {
    fast
    solve();
}
