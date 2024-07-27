/**
 * 13:57:58 7/26/24
 * D
 */
// ./CodeForces/Div3-490/D.cpp
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
    int n, m;
    cin >> n >> m;
    int k = n / m;
    vector<int> a(n);
    vector<vector<int>> val(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        val[a[i] % m].push_back(i);
    }

    int ans = 0;
    vector<pii> fre;
    for (int i = 0; i < 2 * m; ++i) {
        int cur = i % m;
        while (val[cur].size() > k) {
            fre.emplace_back(val[cur].back(), i);
            val[cur].pop_back();
        }

        while (val[cur].size() < k and not fre.empty()) {
            int elem = fre.back().F;
            int mmod = fre.back().S;
            fre.pop_back();
            val[cur].push_back(elem);
            a[elem] += i - mmod;
            ans += i - mmod;
        }
    }

    cout << ans << nl;
    for (int i: a) cout << i << ' ';
    cout << nl;
}

int32_t main() {
    fast
    solve();
}
