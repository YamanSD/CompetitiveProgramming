/**
 * 15:42:21 7/13/24
 * StringLCM
 */
// ./CodeForces/1000/StringLCM.cpp
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

string mul(const string& s, int k) {
    string r;

    while (k--) {
        r += s;
    }

    return r;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        string s0, s1;
        cin >> s0 >> s1;
        int g = gcd(s0.length(), s1.length());
        const auto& m0 = mul(s0, s1.length() / g);
        const auto& m1 = mul(s1, s0.length() / g);
        if (m0 == m1) cout << m0 << nl;
        else cout << -1 << nl;
    }
}

int32_t main() {
    fast
    solve();
}
