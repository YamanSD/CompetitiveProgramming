/**
 * 15:32:45 8/5/24
 * E
 */
// ./CodeForces/Div4-806/E.cpp
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

vector<pii> rot(int r, int c, int n) {
//    int cs = 0, sn = 1; // 90deg
    n--;
    vector<pii> res{{r, c}};

    for (int i = 0; i < 3; i++) {
        auto& p = res.back();
        res.emplace_back(p.S, n - p.F);
    }

    return res;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string g[n];
        for (auto& r: g) {
            cin >> r;
        }

        int cst = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                int cnt0 = 0, cnt1 = 0;
                const auto& v = rot(r, c, n);
                for (auto& p: v) {
                    if (g[p.F][p.S] == '1') cnt1++;
                    else cnt0++;
                }
                cst += min(cnt0, cnt1);
                char ch = cnt0 > cnt1 ? '0' : '1';
                for (auto& p: v) {
                    g[p.F][p.S] = ch;
                }
            }
        }

        cout << cst << nl;
    }
}

int32_t main() {
    fast
    solve();
}
