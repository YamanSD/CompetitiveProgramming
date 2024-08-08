/**
 * 14:32:10 8/8/24
 * YoungExplorers
 */
// ./CodeForces/1200/YoungExplorers.cpp
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
#define LT int T; cin >> T; while (T--)
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int& i: a) {
        cin >> i;
        m[i]++;
    }
    int res = 0;
    vector<int> rem;
    for (auto& p: m) {
        if (p.F <= p.S) {
            int v = p.S / p.F;
            res += v;
            n -= p.F * v;
            p.S %= p.F;
        }
        for (int i = 0; i < p.S; i++) rem.push_back(p.F);
    }
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (rem[i] <= i - j) {
            j = i;
            res++;
        }
    }
    cout << res << nl;
}

int32_t main() {
    fast
    LT solve();
}
