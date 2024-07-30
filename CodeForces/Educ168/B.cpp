/**
 * 17:29:38 7/30/24
 * B
 */
// ./CodeForces/Educ168/B.cpp
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
        cin >> n;
        char ch;
        vector<vector<bool>> g(2, vector<bool>(n));
        for (auto& r: g) {
            for (int i = 0; i < n; i++) {
                cin >> ch;
                r[i] = ch == 'x';
            }
        }

//        for (auto& r: g) {
//            for (int i = 0; i < n; i++) {
//                cout << r[i];
//            }cout << nl;
//        }

        int res = 0;
        for (int r = 0; r < 2; r++) {
            for (int c = 1; c < n - 1; c++) {
                int b = abs(r - 1);
                if (
                        not g[r][c]
                        and not g[b][c]
                        and g[b][c - 1]
                        and g[b][c + 1]
                        and not g[r][c - 1]
                        and not g[r][c + 1]
                ) {
                    res++;
                }
            }
        }
        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
