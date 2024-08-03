/**
 * 14:06:26 8/2/24
 * MaxiumumCostDeletion
 */
// ./CodeForces/1000/MaxiumumCostDeletion.cpp
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
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        if (b < 0) {
            vector<char> m{s[0]};
            for (char c: s) {
                if (m.back() != c) {
                    m.push_back(c);
                }
            }
            int cnt0 = 0, cnt1 = 0;
            for (char c: m) {
                if (c == '0') cnt0++;
                else cnt1++;
            }

            cout << n * a + b * (min(cnt0, cnt1) + 1) << nl;
        } else {
            cout << n * (a + b) << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
