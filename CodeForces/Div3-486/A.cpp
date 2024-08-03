/**
 * 14:30:46 8/3/24
 * A
 */
// ./CodeForces/Div3-486/A.cpp
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
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int& i: a) cin >> i;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        m[a[i]] = i + 1;
    }
    if (m.size() < k) NO
    else {
        YES
        vector<int> v;
        for (auto& p: m) {
            v.push_back(p.S);
            if (v.size() == k) break;
        }
        for (int i: v) cout << i << ' ';
    }
}

int32_t main() {
    fast
    solve();
}
