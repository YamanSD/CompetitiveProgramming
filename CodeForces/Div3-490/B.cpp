/**
 * 13:38:34 7/26/24
 * B
 */
// ./CodeForces/Div3-490/B.cpp
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

vector<int> dv(int n) {
    vector<int> res;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            res.push_back(i);
        }
    }
    return res;
}

void solve() {
    int n;
    string s;
    cin >> n >> s;
    const auto& d = dv(n);
    for (int i: d) {
        reverse(s.begin(), s.begin() + i);
    }
    reverse(s.begin(), s.end());
    cout << s << nl;
}

int32_t main() {
    fast
    solve();
}
