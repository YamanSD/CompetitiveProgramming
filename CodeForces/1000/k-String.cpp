/**
 * 14:10:40 7/20/24
 * k-String
 */
// ./CodeForces/1000/k-String.cpp
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
    int k;
    string s;
    cin >> k >> s;
    map<char, int> m;
    for (char c: s) m[c]++;
    bool f = false;
    string r;
    for (auto& p: m)
        if (p.S % k) {
          f = true;
          break;
        } else {
            r += string(p.S / k, p.F);
        }

    if (f) {
        cout << -1 << nl;
    } else {
        for (size_t i = 0; i < s.size(); i += r.size()) {
            cout << r;
        }
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
