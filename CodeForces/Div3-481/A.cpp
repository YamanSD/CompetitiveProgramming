/**
 * 16:57:48 7/25/24
 * A
 */
// ./CodeForces/Div3-481/A.cpp
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
    int n;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;
    set<int> s;
    vector<int> res;
    for (int i = n - 1; i >= 0; i--) {
        if (not s.count(a[i])) res.push_back(a[i]);
        s.insert(a[i]);
    }
    cout << res.size() << nl;
    for (auto i: views::reverse(res)) cout << i << ' ';
    cout << nl;
}

int32_t main() {
    fast
    solve();
}
