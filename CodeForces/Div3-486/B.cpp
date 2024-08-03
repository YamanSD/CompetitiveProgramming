/**
 * 14:38:48 8/3/24
 * B
 */
// ./CodeForces/Div3-486/B.cpp
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
    int n;
    cin >> n;
    vector<string> a(n);
    for (auto& s: a) cin >> s;
    std::sort(a.begin(), a.end(), [](auto& s0, auto& s1) {
        return s0.size() == s1.size() ? s0 < s1 : s0.size() < s1.size();
    });

    bool fail = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1].find(a[i]) == string::npos) {
            fail = true;
            break;
        }
    }
    if (fail) NO
    else {
        YES
        for (auto& s: a) cout << s << nl;
    }
}

int32_t main() {
    fast
    solve();
}
