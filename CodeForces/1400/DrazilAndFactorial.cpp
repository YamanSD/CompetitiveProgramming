/**
 * 19:33:14 8/3/24
 * DrazilAndFactorial
 */
// ./CodeForces/1400/DrazilAndFactorial.cpp
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
    string s;
    cin >> n >> s;
    map<int, int, greater<>> m;
    for (char c: s) {
        if (c > '1') {
            for (int i = 2; i <= c - '0'; i++) {
                if (i == 4) {
                    m[2] += 2;
                } else if (i == 6) {
                    m[2]++;
                    m[3]++;
                } else if (i == 8) {
                    m[2] += 3;
                } else if (i == 9) {
                    m[3] += 2;
                } else {
                    m[i]++;
                }
            }
        }
    }
    string res;
    for (int d: {7, 5, 3, 2}) {
        int cnt = m[d];
        if (not cnt) continue;
        res += string(cnt, d + '0');
        for (int i = 2; i <= d; i++) {
            if (i == 4) {
                m[2] -= 2 * cnt;
            } else if (i == 6) {
                m[2] -= cnt;
                m[3] -= cnt;
            } else if (i == 8) {
                m[2] -= 3 * cnt;
            } else if (i == 9) {
                m[3] -= 2 * cnt;
            } else {
                m[i] -= cnt;
            }
        }
    }
    cout << res << nl;
}

int32_t main() {
    fast
    solve();
}
