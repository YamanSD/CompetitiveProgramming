/**
 * 17:19:30 6/27/24
 * A
 */
// ./CodeForces/Educ167/A.cpp
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

int eucD(pii p0, pii p1) {
    int v0 = p0.F - p1.F;
    int v1 = p0.S - p1.S;
    return ceil(sqrt(v0 * v0 + v1 * v1));
}

void solve() {
    int n;
    cin >> n;
    pii cs[n];
    for (auto& p: cs) cin >> p.F >> p.S;

    for (auto& p: cs) {
        int mxd = eucD({0, 0}, p);
        p.S -= mxd - 1;

        if (-mxd <= p.S) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
