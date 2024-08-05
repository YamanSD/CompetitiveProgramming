/**
 * 15:00:08 8/5/24
 * D
 */
// ./CodeForces/Div4-806/D.cpp
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

string sub(const string& s0, const string& s1, size_t p) {
    string res;
    for (size_t i = 0; i < s0.size(); i++) {
        if (not (p <= i and i <= p + s1.size())) {
            res += s0[i];
        }
    }
    return res;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[n];
        map<string, bool> mp;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            mp[s[i]] = true;
        }
        for (int i = 0; i < n; i++) {
            bool ok = false;
            for (int j = 1; j < s[i].length(); j++) {
                string pref = s[i].substr(0, j),
                       suff = s[i].substr(j, s[i].length() - j);
                if (mp[pref] and mp[suff]) ok = true;
            }
            cout << ok;
        }
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
