/**
 * 15:43:16 8/2/24
 * TrafficLight
 */
// ./CodeForces/1000/TrafficLight.cpp
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
        int n;
        char cur;
        string s;
        cin >> n >> cur >> s;
        set<int> g;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'g') g.insert(i);
        }
        int mx = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == cur) {
                auto p = g.lower_bound(i);
                if (p == g.end()) {
                    p = g.lower_bound(0);
                    mx = max(mx, *p + n - i);
                } else {
                    mx = max(mx, *p - i);
                }
            }
        }
        cout << mx << nl;
    }
}

int32_t main() {
    fast
    solve();
}
