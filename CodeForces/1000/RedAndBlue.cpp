/**
 * 14:18:35 7/20/24
 * RedAndBlue
 */
// ./CodeForces/1000/RedAndBlue.cpp
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
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        vector<int> r(n);
        for (int&i: r)cin>>i;
        cin >> m;
        vector<int> b(m);
        for (int&i: b) cin>>i;
        std::partial_sum(r.begin(), r.end(), r.begin());
        std::partial_sum(b.begin(), b.end(), b.begin());
        cout << max(0ll, *max_element(r.begin(), r.end())) + max(0ll, *max_element(b.begin(), b.end())) << nl;
    }
}

int32_t main() {
    fast
    solve();
}
