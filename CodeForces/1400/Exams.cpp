/**
 * 13:22:11 7/22/24
 * Exams
 */
// ./CodeForces/1400/Exams.cpp
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
    vector<pii> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].F >> v[i].S;
    }
    std::sort(v.begin(), v.end());

    int cur = v[0].S;
    for (int i = 1; i < n; i++) {
        if (v[i].S >= cur) {
            cur = v[i].S;
        } else {
            cur = v[i].F;
        }
    }
    cout << cur << nl;
}

int32_t main() {
    fast
    solve();
}
